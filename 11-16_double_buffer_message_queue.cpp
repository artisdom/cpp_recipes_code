#include <future>
//#include <conditional>
#include <condition_variable>
#include <mutex>
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class MessageQueue
{
private:
    using Queue = vector<T>;
    using QueueIterator = typename Queue::iterator;

    Queue m_A;
    Queue m_B;

    Queue* m_Producer{ &m_A };
    Queue* m_Consumer{ &m_B };

    QueueIterator m_ConsumerIterator{ m_B.end() };

    condition_variable& m_MessageCondition;
    condition_variable m_ConsumptionFinished;

    mutex m_MutexProducer;
    mutex m_MutexConsumer;

    unsigned int m_SwapCount{ 0 };

public:

    MessageQueue(condition_variable& messageCondition) : m_MessageCondition{ messageCondition } {

    }

    unsigned int GetCount() const {
        return m_SwapCount;
    }

    void Add(T&& operation) {

        unique_lock<mutex> lock{ m_MutexProducer };
        m_Producer->insert(m_Producer->end(), std::move(operation));
    }

    void BeginConsumption() {

        m_MutexConsumer.lock();
    }

    T consume() {

        T operation;

        if (m_Consumer->size() > 0)
        {
            operation = *m_ConsumerIterator;
            m_ConsumerIterator = m_Consumer->erase(m_ConsumerIterator);
            assert(m_ConsumerIterator == m_Consumer->begin());
        }

        return operation;
    }

    void EndConsumption() {

        assert(m_Consumer->size() == 0);
        m_MutexConsumer.unlock();
        m_ConsumptionFinished.notify_all();

    }

    unsigned int Swap() {

        unique_lock<mutex> lockB{ m_MutexConsumer };
        m_ConsumptionFinished.wait(lockB, [this]() { return m_Consumer->size() == 0; });

        unique_lock<mutex> lockA{ m_MutexProducer };

        Queue* temp{ m_Producer };

        m_Producer = m_Consumer;
        m_Consumer = temp;

        m_ConsumerIterator = m_Consumer->begin();

        m_MessageCondition.notify_all();

        return m_SwapCount++;
    }
};

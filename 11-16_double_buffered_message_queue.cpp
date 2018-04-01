#include <future>
#include <iostream>

using namespace std;

template <typename T>
class MessageQueue
{
private:
  using Queue = vector; < T >;
  using QueueIterator = typename Queue::iterator;
  
  Queue m_A;
  Queue m_B;
  
  Queue* m_Producer{ &m_A };
  Queue* m_Consumer{ &m_B };
  
  QueueIterator m_ConsumerIterator{ m_B.end() };
  
  
};
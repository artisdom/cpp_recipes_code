#include <iostream>

using namespace std;

class MyClass
{
private:
    static int s_Counter;
    int* m_Member{ &s_Counter };

public:
    MyClass()
    {
        ++(*m_Member);
        cout << "Constructing: " << GetValue() << endl;
    }
    ~MyClass()
    {
        if (m_Member)
        {
            --(*m_Member);
            m_Member = nullptr;

            cout << "Destructing: " << s_Counter << endl;
        }
        else
        {
            cout << "Destroying a moved-from instance" << endl;
        }
    }

    MyClass(const MyClass& rhs) : m_Member{ rhs.m_Member }
    {
        ++(*m_Member);
        cout << "Copying: " << GetValue() << endl;
    }

    MyClass(MyClass&& rhs) : m_Member{ rhs.m_Member }
    {
        
    }
};
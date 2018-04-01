#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class MyClass
{
public:
    MyClass(const int value) : m_Value{ value }
    {}

    ~MyClass()
    {}

    int GetValue() const
    {
        return m_Value;
    }

private:
    int m_Value;
};

bool CompareMyClasses(const MyClass& left, const MyClass& right)
{
    return left.GetValue() < right.GetValue();
}

int main(int argc, char const *argv[])
{
    vector<MyClass> myVector{ 4, 10, 6, 9, 1 };
    auto minimum = min_element(myVector.begin(), myVector.end(), CompareMyClasses);

    if (minimum != myVector.end())
    {
        cout << "Minimum value: " << (*minimum).GetValue() << std::endl;
    }

    return 0;
}

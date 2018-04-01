#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class MyClass
{
private:
    int m_Value;

public:
    MyClass(const int value) : m_Value{ value }
    {}

    int GetValue() const
    {
        return m_Value;
    }

    bool operator <(const MyClass& other) const
    {
        return m_Value < other.m_Value;
    }
};

int main(int argc, char const *argv[])
{
    vector<MyClass> myVector{ 4, 10, 6, 9, 1 };
    auto minium = min_element(myVector.begin(), myVector.end());

    if (minium != myVector.end())
    {
        cout << "Minimum value: " << (*minium).GetValue() << std::endl;
    }

    return 0;
}

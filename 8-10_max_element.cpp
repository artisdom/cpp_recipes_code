/*
 * 8-10_max_element.cpp
 *
 *  Created on: Apr 9, 2016
 *      Author: feng
 */

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
	{

	}

	int GetValue() const
	{
		return m_Value;
	}

	bool operator <(const MyClass& other) const
	{
		return m_Value < other.m_Value;
	}
};

bool CompareMyClasses(const MyClass& left, const MyClass& right)
{
	return left.GetValue() < right.GetValue();
}

int main(int argc, char* argv[])
{
	vector<int> myIntVector{ 4, 10, 6, 9, 1 };
	auto intMaximum = max_element(myIntVector.begin(), myIntVector.end());
	if (intMaximum != myIntVector.end())
	{
		cout << "Maxmimum value: " << *intMaximum << std::endl << std::endl;
	}

	return 0;
}

/*
 * 7-8_vector_erase.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: feng
 */

#include <cinttypes>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int32_t> stlVector
	{
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11,
		12,
		13,
		14,
		15,
		16
	};

	cout << "The size is: " << stlVector.size() << endl;
	cout << "The capacity is: " << stlVector.capacity() << endl << endl;

	for (auto&& number : stlVector)
	{
		std::cout << number << ", ";
	}

	while (stlVector.size() > 0)
	{
		auto iterator = stlVector.end() - 1;
		stlVector.erase(iterator);
	}

	cout << endl << endl << "The size is: " << stlVector.size() << endl;
	cout << "The capacity is: " << stlVector.capacity() << endl << endl;

	for (auto&& number : stlVector)
	{
		cout << number << ", ";
	}

	cout << endl;

	return 0;
}


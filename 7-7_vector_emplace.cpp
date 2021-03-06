/*
 * 7-7_vector_emplace.cpp
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
		5
	};

	cout << "The size is: " << stlVector.size() << endl;
	cout << "The capacity is: " << stlVector.capacity() << endl;

	auto iterator = stlVector.begin() + 2;
	stlVector.emplace(iterator, 6);

	cout << "The size is: " << stlVector.size() << endl;
	cout << "The capacity is: " << stlVector.capacity() << endl;

	for (auto&& number : stlVector)
	{
		cout << number << endl;
	}

	return 0;
}



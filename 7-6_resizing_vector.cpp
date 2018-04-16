/*
 * 7-6_resizing_vector.cpp
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
	cout << "The capacity is: " << stlVector.capacity() << endl;

	stlVector.emplace_back(17);

	cout << "The size is: " << stlVector.size() << endl;
	cout << "The capacity is: " << stlVector.capacity() << endl;

	for (auto&& number : stlVector)
	{
		cout << number << endl;
	}

	return 0;
}



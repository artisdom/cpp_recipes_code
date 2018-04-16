/*
 * 7-4_stl_vector.cpp
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
	vector<int32_t> stlVector{ 10, 65, 3000, 2, 49 };

	for (uint32_t i = 0; i < stlVector.size(); ++i)
	{
		cout << stlVector[i] << endl;
	}

	for (auto&& number : stlVector)
	{
		cout << number << endl;
	}

	return 0;
}



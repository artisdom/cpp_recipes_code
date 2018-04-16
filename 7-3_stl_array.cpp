/*
 * 7-3_stl_array.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: feng
 */

#include <array>
#include <cinttypes>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const uint32_t numberOfElements{ 5 };
	array<int32_t, numberOfElements> stlArray{ 10, 65, 3000, 2, 49 };

	for (uint32_t i = 0; i < numberOfElements; ++i)
	{
		cout << stlArray[i] << endl;
	}

	for (auto&& number : stlArray)
	{
		cout << number << endl;
	}

	return 0;
}



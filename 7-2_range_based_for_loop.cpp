/*
 * 7-2_range_based_for_loop.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: feng
 */

#include <cinttypes>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const uint32_t numberOfElements{ 5 };
	int32_t normalArray[numberOfElements]{ 10, 65, 3000, 2, 49 };

	for (auto&& number : normalArray)
	{
		cout << number << endl;
	}

	return 0;
}



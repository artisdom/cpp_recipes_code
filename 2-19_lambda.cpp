/*
 * 2-19_lambda.cpp
 *
 *  Created on: May 1, 2016
 *      Author: feng
 */

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>

using namespace std;

int main()
{
	using MyArray = array<uint32_t, 5>;
	MyArray myArray{ 1, 2, 3, 4, 5 };

	for_each(myArray.cbegin(), myArray.cend(), [](auto&& number) { cout << number << endl; });

	return 0;
}




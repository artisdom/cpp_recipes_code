/*
 * 2-20_lambda_closure_variable.cpp
 *
 *  Created on: May 1, 2016
 *      Author: feng
 */

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	using MyArray = array<uint32_t, 5>;
	MyArray myArray{ 1, 2, 3, 4, 5 };

	auto myClosure = [](auto&& number) { cout << number << endl; };

	cout << typeid(myClosure).name() << endl;

	for_each(myArray.begin(), myArray.end(), myClosure);

	return 0;
}



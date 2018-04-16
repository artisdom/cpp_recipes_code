/*
 * 4-10_hexadecimal.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: feng
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	uint32_t hexValue{ 0x89 };
	cout << "Decimal: " << hexValue << endl;
	cout << hex << "Hexadecimal: " << hexValue << endl;
	cout << showbase << hex << "Hexadecimal (with base): " << hexValue << endl;

	return 0;
}



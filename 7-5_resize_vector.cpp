/*
 * 7-5_resize_vector.cpp
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
	vector<int32_t> stlVector{ 10, 650, 3000, 2, 49 };
	cout << "The size is: " << stlVector.size() << endl;

	stlVector.emplace_back( 50 );
	cout << "The size is: " << stlVector.size() << endl;

	for (auto&& number : stlVector)
	{
		cout << number << endl;
	}

	return 0;
}



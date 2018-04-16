/*
 * 7-11_forward_list.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: feng
 */

#include <cinttypes>
#include <forward_list>
#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	forward_list<int32_t> myList{ 1, 2, 3, 4, 5 };

	myList.emplace_front(6);

	auto forwardIter = myList.begin();
	++forwardIter;
	++forwardIter;
	myList.emplace_after(forwardIter, 9);

	for (auto&& number : myList)
	{
		cout << number << endl;
	}

	return 0;
}

/*
 * 7-10_list.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: feng
 */

#include <cinttypes>
#include <iostream>
#include <list>

using namespace std;

int main(int argv, char* argc[])
{
	list<int32_t> myList{ 1, 2, 3, 4, 5 };

	for (auto&& number : myList)
	{
		cout << number << endl;
	}
	cout << endl;

	myList.emplace_front(6);
	myList.emplace_back(7);

	for (auto&& number : myList)
	{
		cout << number << endl;
	}
	cout << endl;

	auto forwardIter = myList.begin();
	++forwardIter;
	++forwardIter;
	myList.emplace(forwardIter, 9);

	for (auto&& number : myList)
	{
		cout << number << endl;
	}
	cout << endl;

	auto reverseIter = myList.end();
	--reverseIter;
	--reverseIter;
	--reverseIter;
	myList.emplace(reverseIter, 8);

	for (auto&& number : myList)
	{
		cout << number << endl;
	}
	cout << endl;

	return 0;
}



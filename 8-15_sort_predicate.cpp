/*
 * 8-15_sort_predicate.cpp
 *
 *  Created on: Apr 9, 2016
 *      Author: feng
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool IsGreater(int left, int right)
{
	return left > right;
}

int main(int argc, char* argv[])
{
	vector<int> myVector{ 10, 6, 4, 7, 8, 3, 9 };
	sort(myVector.begin(), myVector.end(), IsGreater());

	for (auto&& element : myVector)
	{
		cout << element << ", ";
	}

	return 0;
}

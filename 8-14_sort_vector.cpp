/*
 * 8-14_sort_vector.cpp
 *
 *  Created on: Apr 9, 2016
 *      Author: feng
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> myVector{ 10, 6, 4, 7, 8, 3, 9 };
	sort(myVector.begin(), myVector.end());

	for (auto&& element : myVector)
	{
		cout << element << ", ";
	}

	cout << endl;

	return 0;
}



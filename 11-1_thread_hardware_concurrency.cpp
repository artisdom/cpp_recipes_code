/*
 * 11-1_thread_hardware_concurrency.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: feng
 */

#include <iostream>
#include <thread>

using namespace std;

int main(int argc, char* argv[])
{
	const unsigned int numberOfProcessors{ thread::hardware_concurrency() };

	cout << "This system can run " << numberOfProcessors << " concurrent tasks" << endl;

	return 0;
}



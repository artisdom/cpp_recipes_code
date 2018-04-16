/*
 * 11-3_thread_missing_join1.cpp
 *
 *  Created on: Apr 5, 2016
 *      Author: feng
 */

#include <iostream>
#include <thread>
using namespace std;
void ThreadTask()
{
	for (unsigned int i{ 0 }; i < 20; ++i)
	{
		cout << "Output from thread" << endl;
	}
}
int main(int argc, char* argv[])
{
	const unsigned int numberOfProcessors{ thread::hardware_concurrency() };

	cout << "This system can run " << numberOfProcessors << " concurrent tasks" << endl;

	thread myThread{ ThreadTask };
	cout << "Output from main" << endl;

	myThread.join();

	return 0;
}






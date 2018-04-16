/*
 * 11-5_thread_static_data.cpp
 *
 *  Created on: Apr 5, 2016
 *      Author: feng
 */

#include <cstdlib>
#include <iostream>
#include <stack>
#include <thread>
#include <vector>

using namespace std;

class MyManagedObject
{
private:
	static const unsigned int MAX_OBJECTS{ 4 };

	using MyManagedObjectCollection = vector < MyManagedObject >;
	static MyManagedObjectCollection s_ManagedObjects;

	static stack<unsigned int> s_FreeList;

	unsigned int m_Value { 0xFFFFFFFF };

public:
	MyManagedObject() = default;
	MyManagedObject(unsigned int value) : m_Value{ value }
	{
	}

	void* operator new(size_t numBytes)
	{
		void* objectMemory{};

		if (s_ManagedObjects.capacity() < MAX_OBJECTS)
		{
			s_ManagedObjects.reserve(MAX_OBJECTS);
		}
	}


};

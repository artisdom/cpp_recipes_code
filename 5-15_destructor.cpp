/*
 * 5-15_destructor.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: feng
 */

#include <cinttypes>
#include <string>

using namespace std;

class Vehicle
{
private:
	string m_Name;
	uint32_t m_NumberOfWheels{};

public:
	Vehicle() = default;

	Vehicle(string name, uint32_t numberOfWheels) : m_Name{ name }, m_NumberOfWheels{ numberOfWheels }
	{

	}

	~Vehicle()
	{
		cout << m_Name << " is being destroyed!" << endl;
	}

	uint32_t GetNumberOfWheels()
	{
		return m_NumberOfWheels;
	}
};



#include <cinttypes>
#include <iostream>
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
    cout << m_Name << " at " << this << " is being destroyed!" << endl;
  }
  
  Vehicle(const Vehicle& other) = default;
  Vehicle& operator=(const Vehicle& other) = default;
  
  uint32_t GetNumberOfWheels()
  {
    return m_NumberOfWheels;
  }
};
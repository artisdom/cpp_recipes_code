#include <array>
#include <cstdint>
#include <iostream>

using namespace std;

constexpr uint32_t ArraySizeFunction(uint32_t parameter)
{
  uint32_t value{ parameter };
  if (value > 10) {
    value = 10;
  }
  return value;
}

int main()
{
  constexpr uint32_t ARRAY_SIZE{ ArraySizeFunction(15) };
  array<uint32_t, ARRAY_SIZE> myArray{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  
  for (auto&& number : myArray)
  {
    cout << number << endl;
  }
  
  return 0;
}
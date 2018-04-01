#include <array>
#include <cstdint>
#include <iostream>

using namespace std;

constexpr uint32_t ArraySizeFunction(int parameter)
{
  return parameter;
}

int main()
{
  constexpr uint32_t ARRAY_SIZE{ ArraySizeFunction(5) };
  array<uint32_t, ARRAY_SIZE> myArray{ 1, 2, 3, 4, 5 };
  
  for (auto&& number : myArray)
  {
    cout << number << endl;
  }
  
  return 0;
}
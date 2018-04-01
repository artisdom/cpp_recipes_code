#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <typeinfo>

int main()
{
    using MyArray = std::array<uint32_t, 5>;
    MyArray myArray{ 1, 2, 3, 4, 5 };

    auto myClosure = [] (auto&& n) { std::cout << n << std::endl; };

    std::cout << typeid(myClosure).name() << std::endl;

    std::for_each(myArray.begin(), myArray.end(), myClosure);

    return 0;
}

/*

$ ./.output/main | c++filt -t
main::{lambda(auto:1&&)#1}
1
2
3
4
5

*/
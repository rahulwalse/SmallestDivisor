// SmallestDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Divisor.h"

int main()
{
    int number;
    std::cout << "\nEnter a number to find smallest divisor: ";
    std::cin >> number;

    std::cout << "\nSmallest divisor of " << number << " is " << smallest_divisor(number);

    return 0;
}
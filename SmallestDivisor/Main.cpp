// SmallestDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Divisor.h"

int main()
{
    bool stay = true;
    int option = 0;
    int number;

    while (stay)
    {
        std::cout << "\n1. Find smallest divisor for given number";
        std::cout << "\n2. Find smallest divisor for given number without calculating square root";
        std::cout << "\n3. Find all exact divisors for given number\n4. Exit";
        std::cout << "\nChoose an option: ";
        std::cin >> option;

        switch (option)
        {
            case 1: std::cout << "\nNOTE: Please enter a non-zero number!\nEnter a number: ";
                    std::cin >> number;
                    std::cout << "\nSmallest divisor of " << number << " is " << smallest_divisor(number) << std::endl;
                    break;

            case 2: std::cout << "\nNOTE: Please enter a non-zero number!\nEnter a number: ";
                    std::cin >> number;
                    std::cout << "\nSmallest divisor of " << number << " is " << smallest_divisor_no_sqrt(number) << std::endl;
                    break;

            case 3: std::cout << "\nNOTE: Please enter a non-zero number!\nEnter a number: ";
                    std::cin >> number;
                    std::cout << "All exact divisors of " << number << ": ";
                    all_divisors(number);
                    break;

            case 4: std::cout << "\nExiting the program...";
                    stay = false;
                    break;

            default:std::cout << "\nInvalid option! Please choose from the options provided.\n";
                    break;
        }
    }

    return 0;
}
/*
	Implementation for listing all exact divisors for given number
*/

#include <iostream>
#include <vector>
#include "Divisor.h"

void print_divisors(const std::vector<int>&);

void all_divisors(const double number)
{
	// Initialize divisor to 1
	int divisor = 1;
	std::vector<int> divisors;

	// Find exact divisors
	while (divisor <= number)
	{
		if (static_cast<int>(number) % divisor == 0)
			divisors.push_back(divisor);

		divisor++;
	}

	print_divisors(divisors);
}

void print_divisors(const std::vector<int>& divisors_list)
{
	// Print the divisors
	for (std::vector<int>::const_iterator itr = divisors_list.begin(); itr != divisors_list.end(); itr++)
	{
		if (itr == divisors_list.end() - 1)
			std::cout << *itr << '\n';
		else
			std::cout << *itr << ", ";
	}
}
/*
	Implementation of smallest divisor algorithm without calculating square root explicitly.
*/

#include "Divisor.h"

int smallest_divisor_no_sqrt(const double number)
{
	int divisor = 0;

	//- If the number is even then smallest divisor is 2
	if (static_cast<int>(number) % 2 == 0)
		return 2;

	divisor = 3;
	//- Generate next odd divisor
	while (static_cast<int>(number) % divisor != 0 && divisor < static_cast<int>(number))
		divisor += 2;

	// If the divisor is exact divisor of number and divisor is not equal to number, return divisor
	if (static_cast<int>(number) % divisor == 0 && divisor != static_cast<int>(number))
		return divisor;
	else
		return 1;
}
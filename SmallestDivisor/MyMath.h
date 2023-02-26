/*
	This header file contains all function definitions for calculations like
	finding square root, absolute value etc.
*/

//- Header guard
#ifndef MYMATH_H
#define MYMATH_H

double absolute(const double);
double square_root(const double);

double square_root(const double input_number)
{
	const double error_margin = 0.00001;
	double estimate_one = 0, estimate_two = input_number / 2;

	do
	{
		estimate_one = estimate_two;
		//- Generate better estimate using averaging formula
		estimate_two = (estimate_one + (input_number / estimate_one)) / 2;
	} while (absolute(estimate_one - estimate_two) > error_margin);

	return estimate_two;
}


double absolute(const double number)
{
	if (number < 0)
		return -number;
	else
		return number;
}

#endif // !MYMATH_H
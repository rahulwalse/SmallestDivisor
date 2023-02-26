/*
    Source file implementing the method to calculate the smallest divisor for given
    integer, by generating divisors which are less than square root of given integer.
*/

#include "Divisor.h"
#include "MyMath.h"

int smallest_divisor(const double number)
{
    int sqr_root = 0;
    int divisor = 0;
    //- If the number is even then smallest divisor is 2
    if (static_cast<int>(number) % 2 == 0)
        return 2;
    else
    {
        //- Calculate the square root of number
        sqr_root = static_cast<int>(square_root(number));
        //- Initialize divisor to 3
        divisor = 3;

        //- Generate next odd divisor
        while (static_cast<int>(number) % divisor != 0 && divisor < sqr_root)
            divisor += 2;

        if (static_cast<int>(number) % divisor == 0)
            return divisor;
        else
            return 1;
    }
}
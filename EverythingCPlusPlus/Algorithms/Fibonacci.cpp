#include "stdafx.h"
#include "Fibonacci.h"

long long FibonacciSlow(long number)
{
	if (number <= 1)
		return number;
	return FibonacciSlow(number - 1) + FibonacciSlow(number - 2);

}

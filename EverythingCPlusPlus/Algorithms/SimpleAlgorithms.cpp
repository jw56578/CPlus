#include "stdafx.h"


long long EuclidGreatestCommonDenominator(long long a, long long b)
{
	if (b == 0)
		return a;
	long long aa = a % b;

	return EuclidGreatestCommonDenominator(b, aa);
}
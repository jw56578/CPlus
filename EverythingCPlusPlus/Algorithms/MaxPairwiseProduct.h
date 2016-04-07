#pragma once

#include "stdafx.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>& numbers);
long long MaxPairwiseProductFast(const vector<int>& numbers);
void StressTestMaxpairwiseProduct();
int RunMaxPairwiseProduct();
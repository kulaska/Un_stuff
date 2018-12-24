// 1-I-13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double a, b, res;
	std::cout << "Enter a and b:" << std::endl;
	std::cin >> a >> b;
	if ((1 - (a*a*a - b) / 3) != 0) res = (a*a + b*b) / (1 - (a*a*a - b) / 3); else {
		std::cout << "Uncountable"; return 0;
	};
	std::cout << res;
    return 0;
}


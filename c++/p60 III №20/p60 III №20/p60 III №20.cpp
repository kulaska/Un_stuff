// p60 III ¹20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double e(0);
	cout << "Enter accuracy limit: ";
	cin >> e;
	double sum(0), item(0);
	int i(1);
	do {
		item = 1 / sqrt(pow(3, i));
		sum += item;
		i++;
	} while (item > e);
	cout << "The sum is: " << sum << endl << "The sum has been calculated in " << i << " steps";	
    return 0;
}


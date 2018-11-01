// p53 5.3 ¹10.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"

int sum_arg(int n, int sum1 , int base = 3) {	
	while (n >= 0) {		
		if (n % 2 == 1) sum1 -= pow(base, n); else sum1 += pow(base, n);
		n--;			
		return sum_arg(n, sum1);
	};	
	return sum1;
}


int main()
{	
	int n(0), sum(0);
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "The result is: " << sum_arg(n, sum) << endl;
    return 0;
}



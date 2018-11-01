// p60 IV ¹9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calc(double item = 0,double x = 0.05, int i = 0, int denom_adder = 1, int denom = 1, double sum = 1) {
	/*while (item > e) {*/
	
	cout << "x     " << "F(x)              " << "n" << endl;
	while (x < 0.95) {
		denom_adder += 2;
		denom *= denom_adder;
		item = pow(x, i) / denom;
		sum += item;		
		cout << x << "  " << setprecision(15) << sum << "  " << i + 1 << endl;
		x += 0.1;
		i++;
	}
	return 0;
	//} need to implement e;
}

int main()
{
	double e(0);
/*	cout << "Enter accuracy limit: ";
	cin >> e;
	double sum(0), item(0);
	int i(1);
	do {		
		sum += item;
		i++;
	} while (item > e);*/
	calc();
	return 0;
}
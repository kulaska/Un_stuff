// p52 4.2 ¹1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

double recc(double b, int c) {
	while (c > 0) {
		c--;
		b = (b * 0.1) + 10;
		cout << b << setprecision(15)<< endl;
		return recc(b, c);
	}
}

int main()
{	
	int n(0);
	double b_Prev(9);	
	cout << "Enter n: " << endl;
	cin >> n;
	cout << b_Prev << endl;
	recc(b_Prev, n);
    return 0;
}


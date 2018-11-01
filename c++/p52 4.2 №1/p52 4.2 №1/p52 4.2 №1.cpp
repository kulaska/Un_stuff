// p52 4.2 ¹1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

double recc(double b, int c, int i) {
	while (c > 1) {
		c--;
		b = (b * 0.1) + 10;
		cout << i << " " << b << setprecision(15) << endl;
		i++;
		return recc(b, c, i);
	}
}

int main()
{	
	int n(0), i(2);
	double b_Prev(9);	
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "n" << " " << "B" << endl;
	cout << "1 " << "" << b_Prev << endl;
	recc(b_Prev, n, i);
    return 0;
}


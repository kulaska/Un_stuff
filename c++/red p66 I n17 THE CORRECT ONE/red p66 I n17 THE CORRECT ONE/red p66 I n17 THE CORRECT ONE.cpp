// red p66 I n17 THE CORRECT ONE.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct point {
	double x, y;
};

double perim(point p1, point p2, point p3)
{
	double result = 0;
	result += sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	result += sqrt(pow(p2.x - p3.x, 2) + pow(p2.y - p3.y, 2));
	result += sqrt(pow(p3.x - p1.x, 2) + pow(p3.y - p1.y, 2));

	return result;
}

int main()
{
	double n, c1, c2;
	double max(0), temp;
	int p1 = 0, p2 = 0, p3 = 0;
	vector <point> a;
	cout << "Enter the number of points: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c1 >> c2;
		point dot;
		dot.x = c1;
		dot.y = c2;
		a.push_back(dot);
	};
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				temp = perim(a[i], a[j], a[k]);
				if (temp > max) {
					max = temp;
					p1 = i;
					p2 = j;
					p3 = k;
				}
			}
		}
	}
	cout << a[p1].x << " " << a[p1].y << " " << a[p2].x << " " << a[p2].y << " " << a[p3].x << " " << a[p3].y << " ";
	return 0;
}


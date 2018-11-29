// p88 n18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool count(int arr[], int size) {
	int sum(0);
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}	
	if (sum / 10 > 0 && sum / 10 < 10) return true;
	return false;
}

int main()
{
	int *a = NULL;
	int n(0);
	cout << "Enter the number of the elements" << endl;
	cin >> n;
	a = new int[n];
	cout << "Enter the elements in their respective order: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << (count(a, n) ? "It is a two-digit number" : "No, it is not a two-digint number");
    return 0;
}


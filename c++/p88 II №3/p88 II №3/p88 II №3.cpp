// p88 II ¹3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), max(0);
	cout << "Enter the number of the elements: " << endl;
	cin >> n;
	int *arr = new int[n];
	cout << "Enter the digits in their respective order:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "The mutated array:" << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] == max) arr[i] = 0;
		cout << arr[i] << " ";
	}	
	cout << endl;
    return 0;
}


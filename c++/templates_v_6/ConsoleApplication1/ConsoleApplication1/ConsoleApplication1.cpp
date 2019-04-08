// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>

T** getarray(int rows, int col) {
	T** arr = new T*[rows];
	for (int i = 0; i < rows; i++) arr[i] = new T[col];
	for (int i = 0; i < rows; i++) for (int j = 0; j < col; j++) cin >> arr[i][j];
	cout << endl;
	return arr;
}

template <class A>

double getSumOfArray(A** arr, int r, int c) {
	A sumOfNegative = 0;
	int counter=0;
	for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) if (arr[i][j] < 0) {
		sumOfNegative += arr[i][j];
		counter++;
	};
	return sumOfNegative / counter;
}


int main()
{
	int r, c;
	cout << "Enter the amount of rows and columns: ";
	cout << endl;
	cin >> r >> c;	
	double** arr = getarray<double>(r, c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) cout << arr[i][j] << "\t";
		cout << "\n";
	};
	double sum = getSumOfArray(arr, r, c);
	cout << "\n" << sum << endl;
	for (int i = 0; i < r; i++)
		delete[] arr[i];
	delete[] arr;
    return 0;
}


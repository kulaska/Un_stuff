// red p37 I n19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int lowest(int rows, int cols, int **a) {
	int min = a[0][0];
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) { if (a[i][j] < min) min = a[i][j]; }
	}
	return min;
}


int main()
{
	int rowCount, colCount;
	cout << "Enter the dimensions of the array: " << endl;
	cin >> rowCount >> colCount;
	int** a = new int*[rowCount];
	for (int i = 0; i < rowCount; i++) {
		a[i] = new int[colCount];
	}
	for (int i = 0; i < colCount; i++) {
		for (int j = 0; j < rowCount; j++) cin >> a[i][j];
	}
	cout << lowest(rowCount, colCount, a);
	for (int i = 0; i < rowCount; i++) delete[] a[i];
	delete[]a;
    return 0;
}


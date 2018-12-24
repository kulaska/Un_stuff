// p91 V n13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <iostream> 
using namespace std;

int main()
{
	double sizeRow, sizeCol = 0;
	cout << "Enter the number of the rows" << endl;
	cin >> sizeRow;
	cout << "Enter the number of the columns" << endl;
	cin >> sizeCol;
	if (sizeRow < 1 || sizeCol < 1) {
		cout << "There are no elements in the array" << endl;
		return 0;
	}
	int **a = new int*[sizeRow];
	for (int i = 0; i < sizeRow; i++) {
		a[i] = new int[sizeCol];
	}
	cout << "Enter the elements in their respective order: " << endl;
	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) cin >> a[i][j];
	}

	cout << "\n";

	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) cout << a[i][j] << " ";
		cout << endl;
	}

	
	for (int i = 0; i < 2; i++) {
		delete[] a[i];
	}
	delete[]a;

	return 0;
}
// p89 III ¹8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int sizeRow, sizeCol = 0;
	int temp(0);
	bool light(false);
	while (!light) {
		cout << "Enter the number of the rows" << endl;
		cin >> sizeRow;
		cout << "Enter the number of the columns" << endl;
		cin >> sizeCol;
		if (sizeRow / sizeCol == 1) light = true; else cout << "Enter appropriate dimesnsions for the matrix!" << endl;
	}
	int **a = new int*[sizeRow];
	for (int i = 0; i < sizeRow; i++) {
		a[i] = new int[sizeCol];
	}
	cout << "Enter the elements in their respective order: " << endl;
	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) cin >> a[i][j];
	}

	if (sizeCol % 2 == 0) {
		for (int i = 0; i < sizeRow; i++) {
			temp = a[i][sizeCol / 2];
			a[i][sizeCol / 2] = a[i][(sizeCol / 2) - 1];
			a[i][(sizeCol / 2) - 1] = temp;
		}
	}
	else {		
		for (int i = 0; i < sizeRow; i++) {
			temp = a[i][sizeCol / 2];
			a[i][sizeCol / 2] = a[i][0];
			a[i][0] = temp;
		}
	};

	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) cout << a[i][j];
		cout << endl;
	}
	for (int i = 0; i < sizeRow; i++) {
		delete []a[i];
	}
	delete[]a;	
    return 0;
}


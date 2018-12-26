// p90 IV ¹12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <iostream> 
#include <vector> 
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

	std::vector< int > second;

	cout << "Enter the elements in their respective order: " << endl;

	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) cin >> a[i][j];
	}

	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) if (a[j][i] % 2 == 1) temp = j + 1;
		second.push_back(temp);
	}

	int* ar = second.data();

	second.clear();

	for (int i = 0; i < sizeRow; i++) {
		cout << ar[i] << endl;
	}

	for (int i = 0; i < sizeRow; i++) {
		delete[]a[i];
	}

	delete[]a, ar;

	return 0;
}
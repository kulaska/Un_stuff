// p88 6.8 n18 and 6.cpp : Defines the entry point for the console application.
//

// 18 1dimensional

/* #include "stdafx.h"
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
	int arr[10], i = 0;
	cout << "Enter the elements in their respective order: " << endl;
	for (i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << (count(arr, 10) ? "It is a two-digit number" : "No, it is not a two-digit number") << endl;
	delete []arr;
	arr = NULL;
	return 0;
}*/

// 18 2dimensional
/*

#include "stdafx.h"
#include <iostream>
using namespace std;

bool count(int **arr, int sizeRows, int sizeCols) {
	int sum(0);
	for (int i = 0; i < sizeRows; i++) {
		for (int j = 0; j < sizeCols; j++) {
			sum += arr[i][j];
		}
	}
	if (sum / 10 > 0 && sum / 10 < 10) return true;
	return false;
}

int main()
{
	int **arr = new int*[2];
	for (int i = 0; i < 2; i++) {
		arr[i] = new int[3];
	}
	cout << "Enter the elements in their respective order: " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];			
		}				
	}	
	cout << (count(arr, 2, 3) ? "It is a two-digit number" : "No, it is not a two-digit number") << endl;
	for (int i = 0; i < 2; i++) {
		delete [] arr[i];
	}
	delete [] arr;
	return 0;
}
*/


// 6 1dimensional dynamical 
/* 
	#include "stdafx.h"
	#include <iostream>
	using namespace std;

double count(int arr[], int size) {
	int sum(0);
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}	
	return static_cast<double>(sum)/size;
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
	cout << count(a, n);
	delete[]a;
	a = NULL;
	return 0;
}*/


// 6 2dimensional dynamical
/*
#include "stdafx.h"
#include <iostream>
using namespace std;

double count(int **arr, int sizeRow, int sizeCol) {
	int sum(0);
	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) sum += arr[i][j];
	}
	return static_cast<double>(sum)/(sizeRow * sizeCol);
}

int main()
{	
	double sizeRow, sizeCol = 0;	
	cout << "Enter the number of the rows" << endl;
	cin >> sizeRow;
	cout << "Enter the number of the columns" << endl;
	cin >> sizeCol;
	int **a = new int*[sizeRow];
	for (int i = 0; i < sizeRow; i++) {
		a[i] = new int[sizeCol];
	}	
	cout << "Enter the elements in their respective order: " << endl;
	for (int i = 0; i < sizeRow; i++) {
		for (int j = 0; j < sizeCol; j++) cin >> a[i][j];
	}
	cout << count(a, sizeRow, sizeCol);
	for (int i = 0; i < 2; i++) {
		delete[] a[i];
	}
	delete []a;
	a = NULL;
	return 0;
}*/
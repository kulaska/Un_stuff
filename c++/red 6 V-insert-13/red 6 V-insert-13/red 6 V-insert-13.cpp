// red 6 V-insert-13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	
	int n(0), size(0);
	int max(0), temp(0);
	cout << "Enter the dimension of an array: " << endl;
	cin >> n;	
	cout << "Enter the number you want to be inserted: " << endl; 
	cin >> temp;
	int *a = new int[2*n];
	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] >= max) max = a[i];
	}
	for (int i = 0; i < n; i++) {		
		if (a[i] == max) size++;
	}	
	for (int i = 0; i < n + size; i++) {		
		if (a[i] == max) {			
			for (int j = n+size; j > i; j--) a[j+1] = a[j]; 	
			a[i + 1] = temp;
		};
		
	}	
	for (int i = 0; i < n+size; i++) {
		cout << a[i] << " ";	
	}	
	delete[]a;
    return 0;
}


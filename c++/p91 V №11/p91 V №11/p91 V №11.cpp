// p91 V ¹11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

bool check(int numb) {	
	std::vector< int > cnt;
	while (numb > 0) {
		cnt.push_back(numb % 10);
		numb /= 10;
	}
	int j = cnt.size() - 1;
	for (int i = 0; i < cnt.size(); i++) {
		while (j > i) {
			if (cnt[i] == cnt[j]) return true;
			j--;			
		}		
	}
	return false;
}


int main()
{
	int n(0);
	cout << "Enter the number of the elements: " << endl;
	cin >> n;
	int *arr = new int[n];
	cout << "Enter all the numbers of the declared array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (check(arr[i]) == 0) arr[i] = arr[i+1];
		cout << arr[i] << " ";
	}

	delete[]arr;
    return 0;
}


// red p55 I n13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string item;
	int c;
	cout << "Enter the max number of symbols in a string: ";
	cin >> c;
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	while (getline(in, item)) {
		if (item.length() < c) out << item << endl;
	}
	in.close();
	out.close();
	return 0;
}



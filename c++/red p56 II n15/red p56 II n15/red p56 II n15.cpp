// red p56 II n15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int item, item2;		
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	while (in.peek() != EOF) {
		in >> item >> item2;		
		(item > item2) ? out << item2 : out << item;
		out << " ";
	}
	in.close();
	out.close();
	return 0;
}



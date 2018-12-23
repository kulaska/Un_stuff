// red p25 III n7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string str;
	cout << "Enter the string: " << endl;
	getline(cin, str);	
	istringstream iss(str);
	string word;
	char symb;
	cout << "Enter the letter: " << endl;
	cin >> symb;
	cout << "Words starting with " << "\"" << symb << "\" are: ";
	while (iss >> word) {		
		if (word[0] == symb)
			cout << word << " ";
	}
}
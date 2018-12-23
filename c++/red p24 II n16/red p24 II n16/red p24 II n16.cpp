// red p24 II n16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string er(string str, string substr) {	
	return str.erase(str.find(substr), substr.length());;
}

int main()
{
	string s, ss;
	cout << "Enter the string: " << endl;
	cin >> s;
	cout << "Enter the substring: " << endl;
	cin >> ss;	
	cout << er(s, ss);
    return 0;
}


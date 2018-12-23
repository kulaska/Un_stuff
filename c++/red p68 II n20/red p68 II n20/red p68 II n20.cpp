// red p68 II n20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct students {
	string F, I, O;	
	int kurs, gruppa, rez;
};

int main()
{
	string fam, im, ot;
	int k, g, r, normativ;
	cout << "Normativ: " << endl;
	cin >> normativ;
	students temp;
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	vector<students> v;
	while (in.peek() != EOF) {
		in >> fam >> im >> ot >> k >> g >> r;
		temp.F = fam;
		temp.I = im;
		temp.O = ot;
		temp.kurs = k;
		temp.gruppa = g;
		temp.rez = r;
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i].rez >= normativ) out << v[i].F << " " << v[i].I << " " << v[i].O << endl;
	}
    return 0;
}


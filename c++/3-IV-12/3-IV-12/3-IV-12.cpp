// 3-IV-12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = i; j > 0; j--) cout << j << " ";
		cout << endl;
	}
    return 0;
}


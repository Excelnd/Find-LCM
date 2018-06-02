// Find LCM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n1, n2, max;

	cout << "Enter numbers :" << endl;
	cin >> n1 >> n2;

	max = (n1 > n2) ? n1 : n2;

	do
	{
		if (max % n1 == 0 && max % n2 == 0) {
			cout << "LCM = " << max;
			break;
		}
		else
			++max;

	} while (true);

    return 0;
}


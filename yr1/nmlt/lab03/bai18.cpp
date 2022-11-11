
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Nov 11 08:15:55 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <
*/

#include <iostream>
using namespace std;

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 2 arguments.\n" \
		"First is `X`, which indicates abc.\n" \
		"And the second is `Y`, which indicates xyz.\n" \
		"Please type in the required arguments.\n";

	/** @ var */
	// const double PI = cos(0) * 2;
	// const double EPS = 1e-6;
	int x, a;

	/** @ inp */
	cin >> x;
	a = x;
	int k = 0;

	/** @ cal */
	while (a != 1) {
		k++;
		if (a&1) 
			a = 3 * a + 1;
		else
			a = a / 2;
	}

	/** @ out */
	cout << k << "\n";
	
	return 0;
}

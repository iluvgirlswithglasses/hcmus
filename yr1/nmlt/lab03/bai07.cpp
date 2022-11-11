
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Nov 11 08:03:29 2022
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
		"This program takes 1 arguments.\n" \
		"Which is `X`, the number to be converted to binary.\n" \
		"Please type in the required arguments.\n";

	/** @ var */
	// const double PI = cos(0) * 2;
	// const double EPS = 1e-6;
	int n;

	/** @ inp */
	cin >> n;
	
	/** @ cal */
	for (int i = 15; i >= 0; i--)
		cout << (n>>i&1);
	cout << "\n";
	
	return 0;
}

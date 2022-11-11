
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Nov 11 08:05:10 2022
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
		"Which is `h`, the height of the pyramid.\n" \
		"Please type in the required arguments.\n";

	/** @ var */
	// const double PI = cos(0) * 2;
	// const double EPS = 1e-6;
	int h, d;

	/** @ inp */
	cin >> h;
	
	/** @ cal */
	d = (h<<1) - 1;

	/** @ out */
	for (int i = 0; i < h; i++) {
		int stars = i<<1|1;
		int padding = (d - stars)>>1;
		for (int j = 0; j < padding; j++)
			cout << " ";
		for (int j = 0; j < stars; j++)
			cout << "*";
		cout << "\n";
	}
	
	return 0;
}

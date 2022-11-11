
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Nov 11 08:12:20 2022
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
		"This program takes 4 arguments.\n" \
		"First are `a_cnt` and `a_grow`, which indicate the current population of A and its growth rate.\n" \
		"Likewise for the next 2 arguments: `b_cnt` and `b_grow`.\n" \
		"Please type in the required arguments.\n";

	/** @ var */
	// const double PI = cos(0) * 2;
	// const double EPS = 1e-6;
	double a_cnt, b_cnt, a_grow, b_grow;

	/** @ inp */
	cin >> a_cnt >> a_grow >> b_cnt >> b_grow;
	a_grow = 1 + (a_grow / 100.0);
	b_grow = 1 + (b_grow / 100.0);
	
	/** @ cal */
	int years = 0;
	while (a_cnt < b_cnt) {
		years++;
		a *= a_grow;
		b *= b_grow;
	}

	/** @ out */
	cout << "so it takes " << years << " year(s)\n";
	
	return 0;
}

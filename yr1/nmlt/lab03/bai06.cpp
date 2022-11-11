
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Nov 11 07:55:25 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <
*/

#include <iostream>
using namespace std;

int calc_gcd(int a, int b) {
	if (a < b) 
		swap(a, b);
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 2 arguments.\n" \
		"Which are `A` and `B`, indicate the numbers to be processed.\n" \
		"Please type in the required arguments.\n";

	/** @ var */
	// const double PI = cos(0) * 2;
	// const double EPS = 1e-6;
	int a, b, gcd, lcm;

	/** @ inp */
	cin >> a >> b;
	
	/** @ cal */
	gcd = calc_gcd(a, b);
	lcm = (a*b)/gcd;
	double y = (double) gcd / b;

	/** @ out */
	cout << "gcd(a, b) = " << gcd << "\n";
	cout << "lcm(a, b) = " << lcm << "\n";
	cout << "gcd(a, b) = " << a << "*0" << " + " << b << "*" << y << "\n";
;	
	return 0;
}

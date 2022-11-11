
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Nov 11 08:08:28 2022
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

	/** @ var */
	// const double PI = cos(0) * 2;
	// const double EPS = 1e-6;
	int chickens = 0, dogs = 0;

	/** @ inp */
	
	/** @ cal */
	while (true) {
		dogs = 36 - chickens;
		if ((chickens<<1) + (dogs<<2) == 100)
			break;
	}

	/** @ out */
	cout << "chickens counts: " << chickens << "\n";
	cout << "dogs counts: " << dogs << "\n";
	
	return 0;
}

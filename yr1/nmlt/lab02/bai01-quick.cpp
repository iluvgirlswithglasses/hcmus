
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Wed Nov 09 09:31:03 2022
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
	// cout << \
	// 	"This program takes 2 arguments.\n" \
	// 	"First is `X`, which indicates abc.\n" \
	// 	"And the second is `Y`, which indicates xyz.\n" \
	// 	"Please type in the required arguments.\n";

    /** @ var */
	// const double PI = cos(0) * 2;
	int h, m, s;

	/** @ inp */
	cin >> h >> m >> s;
    
	/** @ cal */

    /** @ out */
    if (0 <= m && m < 60 && 0 <= s && s < 60)
    	cout << "ok\n";
    else
    	cout << "invalidate\n";
    
	return 0;
}

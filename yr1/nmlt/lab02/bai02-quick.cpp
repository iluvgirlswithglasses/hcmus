
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Wed Nov 09 09:32:44 2022
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
	int a, b, c;

	/** @ inp */
	cin >> a >> b >> c;
    
	/** @ cal */

    /** @ out */
    if (a + b + c >= 15) {
    	if (a >= 5 && b >= 5 && c >= 5) 
    		cout << "Hoc deu cac mon\n";
    	else
    		cout << "Hoc chua deu cac mon\n";
    } else {
    	cout << "Thi hong\n";
    }
    
	return 0;
}

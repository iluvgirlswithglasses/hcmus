
/*
author: 	Luu Nam Dat 
uid:		22127062
github: 	https://github.com/iluvgirlswithglasses 
created:	Wed Nov 09 09:35:29 2022
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
	int n;

	/** @ inp */
	cin >> n;
    
	/** @ cal */

    /** @ out */
    switch (n) {
    	case 0:
    		cout << "Khong\n";
    		break;
    	case 1:
    		cout << "Mot\n";
    		break;
    	case 2:
    		cout << "Hai\n";
    		break;
    	case 3:
    		cout << "Ba\n";
    		break;
    	case 4:
    		cout << "Bon\n";
    		break;
    	case 5:
    		cout << "Nam\n";
    		break;
    	case 6:
    		cout << "Sau\n";
    		break;
    	case 7:
    		cout << "Bay\n";
    		break;
    	case 8:
    		cout << "Tam\n";
    		break;
    	case 9:
    		cout << "Chin\n";
    		break;
    	default:
    		cout << "hmm\n";
    }
    
	return 0;
}

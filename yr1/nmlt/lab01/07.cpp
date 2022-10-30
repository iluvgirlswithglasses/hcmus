
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:03:01 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <iostream>
#include <cstdio>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define ld long double
#define pi pair<int, int>
#define st first
#define nd second

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ld d, m;
	cin >> d >> m;
	if (d <= 0.0 || m <= 0) {
		cout << "what kind of object in the world has D=" << d << " and m=" << m << " anyway?\n";
	} else {
		cout << "D: " << d << "\n";
		cout << "m: " << m << "\n";
		cout << "V: " << m/d << "\n";
	}
	return 0;
}

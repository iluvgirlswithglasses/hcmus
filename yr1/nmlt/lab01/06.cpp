
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:00:11 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <iostream>
#include <cmath>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define ld long double
#define pi pair<int, int>
#define st first
#define nd second

const ld PI = acos(0) * 2;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ld r; cin >> r;
	cout << "R: " << r << "\n";
	cout << "C: " << r * 2 * PI << "\n";
	cout << "S: " << r * r * PI << "\n";
	return 0;
}

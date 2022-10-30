
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 07:56:50 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <iostream>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define ld long double
#define pi pair<int, int>
#define st first
#define nd second

ld simple_exp(ld x, int k) {
	ld r = 1;
	while (k--)
		r *= x;
	return r;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ld x; cin >> x;
	cout << simple_exp(x, 3) - 5.0 * simple_exp(x, 2) + 6 << "\n";
	return 0;
}

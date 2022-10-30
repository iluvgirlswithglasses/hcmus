
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:28:40 2022
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

const ld K = 6.67e-11;
ld a, b, d;

ld sqr(ld x) {
	return x*x;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> a >> b >> d;
	cout << K * (a * b) / sqr(d) << "\n";
	return 0;
}

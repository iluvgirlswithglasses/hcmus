
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 09:07:33 2022
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

ld h, w;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> w >> h;
	if (w <= 0.0 || h <= 0.0) {
		cout << "the weight of height of this person doesn't seems right\n";
	} else {
		cout << w / (h*h) << "\n";
	}
	return 0;
}

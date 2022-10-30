
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:32:04 2022
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
#define pi pair<int, int>
#define st first
#define nd second

const ll R = 20;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll x; cin >> x;
	cout << x/R + (x%R > 0) << "\n";
	return 0;
}

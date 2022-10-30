
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:09:42 2022
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

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ld v; cin >> v;
	if (v <= 0)
		cout << "negative price go!\n";
	cout << v + 0.1*v << "\n";
	return 0;
}

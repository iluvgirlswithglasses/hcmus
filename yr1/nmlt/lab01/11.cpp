
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:26:57 2022
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

const int R = 60;
int h, m, s;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> s;
	//
	m = s / R; s %= R;
	h = m / R; m %= R;
	cout << h << ":" << m << ":" << s << "\n";
	return 0;
}

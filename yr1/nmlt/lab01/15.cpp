
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:41:12 2022
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
#define pi pair<const int, ll>
#define st first
#define nd second

const int A[4] = {10, 5, 2, 1};

void calc(ll x) {
	for (int i = 0; i < 4; i++) {
		if (x >= A[i])
			cout << A[i] << ": " << x/A[i] << "\n";
		x %= A[i];
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n, c, p;
	cin >> n >> c >> p;
	c *= n;
	if (p < c) {
		cout << "the customer doesn't have enough money\n";
	} else if (p == c) {
		cout << "no need to change\n";
	} else {
		calc(p-c);
	}
	return 0;
}

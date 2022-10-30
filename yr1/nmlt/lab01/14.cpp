
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:34:55 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <iostream>
using namespace std;

// this problem gave me FC Testing Round 53 PTSD I'm ngl

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<const int, ll>
#define st first
#define nd second

const int A[4] = {10, 5, 2, 1};
ll x;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> x;
	for (int i = 0; i < 4; i++) {
		if (x >= A[i])
			cout << A[i] << ": " << x/A[i] << "\n";
		x %= A[i];
	}
	return 0;
}

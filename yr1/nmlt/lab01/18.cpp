
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 09:09:11 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <cstdio>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<int, int>
#define st first
#define nd second

const int N = 1e6+7;
int n;

int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	printf("accept inputs in following format:\n");
	printf("first line: An integer N indicate the number of participants\n");
	printf("second line: N integer, the i-th integer indicate t[i]\n");

	scanf("%d", &n);
	//
	float res = 0.0;
	while (n--) {
		float x;
		scanf("%f", &x);
		res += x;
	}
	printf("cummulative time: %f\n", res);
	return 0;
}

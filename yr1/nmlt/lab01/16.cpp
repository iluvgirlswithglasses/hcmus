
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:46:04 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <cstdio>
#include <string>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<int, int>
#define st first
#define nd second

const int N = 3, L = 6;
int a, b;

void sep() {
	printf("------\n");
}

void prf(string s, int padding) {
	printf("%s", string(L - padding - s.length(), ' ').c_str());
	printf("%s\n", s.c_str());
}

void setup() {
	printf("   %d\n", a);
	printf(" x %d\n", b);
}

int main() {
	scanf("%d %d", &a, &b);
	setup();
	sep();
	string s = to_string(b);
	for (int i = 0; i < N; i++) {
		int c = s[N-1-i] - '0';
		prf(to_string(c * a), i);
	}
	sep();
	prf(to_string(a * b), 0);
	return 0;
}

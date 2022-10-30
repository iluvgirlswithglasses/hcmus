
/*
author: 	iluvgirlswithglasses 
github: 	https://github.com/iluvgirlswithglasses 
created:	Fri Oct 21 08:14:33 2022
tab-width:	4 spaces

 /\_/\
( o.o )
 > ^ <

I sexually identify myself as an Attack Helicopter
BTW I use Arch
*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define all(c) c.begin(), c.end()
#define ll long long
#define pi pair<int, int>
#define st first
#define nd second

const int N = 1e6+7;
int n;
char s[N];

int main() {
	cin.tie(0)->sync_with_stdio(false);	
	scanf("%s", s);
	n = strlen(s);
	while (s[n-1] == '0') n--;
	//
	for (int i = 0; i < (n>>1); i++)
		swap(s[i], s[n-1-i]);
	for (int i = 0; i < n; i++)
		printf("%c", s[i]);
	//
	printf("\n");
	if (s[n] != 0) 
		printf("leading zero stripped\n");
	return 0;
}

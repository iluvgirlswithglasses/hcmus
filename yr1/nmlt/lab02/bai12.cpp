
#include <iostream>
using namespace std;

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 1 argument.\n" \
		"Which is `X`, the requested number.\n" \
		"Please type in the required argument.\n";

    // @ inp
	int x; 
	cin >> x;

    // @ cal
	if (x < 10)
		cout << x << "\n";
	else {
		char answer = 'A' + (x - 10);
		cout << answer << "\n";
	}
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 1 argument.\n" \
		"Which is `n`, the number to be checked whether it's square or not.\n" \
		"Please type in the required argument.\n";
    // @ inp
	int n;
	cin >> n;
    // @ cal
    double second_square_root = sqrt((double)n);
    if ((int) second_square_root * second_square_root == n)
    	cout << "yes it is a square\n";
    else
    	cout << "it is NOT a square\n";
    // @ out
	return 0;
}

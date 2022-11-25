
#include <iostream>
#include <cmath>
using namespace std;

/** @ utils */

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << "Nhap vao n: ";

	/** @ var */
	double n, s;

	/** @ inp */
	cin >> n;
	
	/** @ cal */
	for (double i = n; i >= 2; i -= 2) {
		s = sqrt(s + (i-1)/(i));
	}

	/** @ out */
	cout << "Tong can tim la: " << s << "\n";
	
	return 0;
}

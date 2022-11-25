
#include <iostream>
using namespace std;

/** @ utils */
int getNumLength(int n) {
	int len = 0;
	while (n > 0) {
		len++;
		n /= 10;
	}
	return len;
}

int getDigit(int n, int i) {
	// returns the left i-th digit of n
	while (i--)
		n /= 10;
	return n % 10;
}

bool check(int n) {
	if (n <= 1000)
		return false;
	int len = getNumLength(n);
	int i = 0;
	// first iteration
	while (getDigit(n, i+1) < getDigit(n, i)) {
		// this iteration unexpectedly meets the end of the string
		if (i + 1 == len - 1)
			return false;
		i++;
	}
	// second iteration
	while (getDigit(n, i+1) > getDigit(n, i)) {
		// this iteration unexpectedly meets the end of the string
		if (i + 1 == len - 1)
			return false;
		i++;
	}
	// third iteration
	while (getDigit(n, i+1) < getDigit(n, i)) {
		// this iteration terminate the number,
		// which implies the number is NICE
		if (i + 1 == len - 1)
			return true;
		i++;
	}
	// the number gets out of the third iteration
	return false;
}

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << "Nhap vao mot so: ";

	/** @ var */
	int n;

	/** @ inp */
	cin >> n;

	/** @ out */
	if (check(n)) {
		cout << n << " la so N\n"; 
	} else {
		cout << n << " KHONG la so N\n";
	}
	
	return 0;
}

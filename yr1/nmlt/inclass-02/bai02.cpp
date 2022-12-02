
#include <iostream>
using namespace std;

/** @ utils */
bool isPrime(int x) {
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) return false;
	return true;
}

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << "Input:\n";

	/** @ var */
	const int N = 102;
	int n, a[N];
	// res[]: the result array
	// m: length of `res[]`
	int m = 0, res[N<<1];

	/** @ inp */
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	/** @ cal */
	for (int i = 0; i < n-1; i++) {
		res[m++] = a[i];
		if (isPrime(a[i]) && isPrime(a[i+1]))
			res[m++] = a[i] + a[i+1];
	}
	res[m++] = a[n-1];

	/** @ out */
	cout << "Output:\n";
	for (int i = 0; i < m; i++)
		cout << res[i] << " ";
	cout << "\n";
	
	return 0;
}

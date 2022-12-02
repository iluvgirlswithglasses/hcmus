
#include <iostream>
using namespace std;

/** @ utils */

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);

	/** @ var */
	const int N = 102;
	int n, x, cnt = 0, a[N];

	/** @ io */
	cout << "Input:\n";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;
	
	/** @ cal */
	for (int i = 0; i < n; i++) {
		if (x % a[i] == 0)
			cnt++;
	}

	/** @ out */
	cout << "Output:\n" << cnt << "\n";
	
	return 0;
}

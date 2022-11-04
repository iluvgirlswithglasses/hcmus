
#include <iostream>
using namespace std;

// int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, };

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 2 arguments.\n" \
		"First is `year`, which indicates the year to be processed.\n" \
		"And the second is `month`, which indicates... the month\n" \
		"Please type in the required arguments.\n";

	// @ vars
	int  year, month;
	bool leap;

	// @ inp
	cin >> year >> month;

	// @ cal
	leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
	// d[2] += leap;

	// @ year proc
	if (leap)
		cout << year << " is a leap year\n";
	else
		cout << year << " is NOT a leap year\n";
	
	// @ month proc
	if (1 <= month && month <= 12) {
		cout << "and there are ";
		switch (month) {
			case 2:
				cout << 28 + leap; 
				break;
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				cout << 31;
				break;
			default:
				cout << 30;
				break;
		}
		cout << " days in the required month\n";
	} else {
		cout << "and the given month is invalid\n";
	}
	return 0;
}

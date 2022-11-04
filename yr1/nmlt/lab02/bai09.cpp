
#include <iostream>
using namespace std;

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << \
		"This program takes 1 argument.\n" \
		"Which is `S`, the distance traveled.\n" \
		"Please type in the required argument.\n";

	// @ vars
	double distance, price; 
	bool   discount = false;

    // @ inp
	cin >> distance;
	// the `discount` var notifies whether 
	// the traveled distance is greater than 120 kilometres
	if (distance > 120) discount = true;
	// discount = distance > 120;

    // the first 1 km
    price += min(distance, 1.0) * 15.0;
	distance = max(0.0, distance - 1.0);

	// from the second to the fifth km
	price += min(distance, 4.0) * 13.5;
	distance = max(0.0, distance - 4.0);

	// the rest of the travel
	price += distance * 11.0;

	if (discount) 
		price *= 0.9;	// apply discount if there is

    // @ out
    cout << "total price: " << price << "\n";
	return 0;
}


#include <iostream>
using namespace std;

/** @ utils */
bool isPrime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) 
			return false;
	return true;
}

bool isLegit(int n) {
	return n >= 0 && !isPrime(n % 10);
}

bool isLucky(int n) {
	// strip the right-most number
	n /= 10;
	// check the middle numbers
	while (n >= 10) {
		int digit = n % 10;
		// if this digit is ~0~ or 1 3 5 7 9
		// --> immediately returns false
		// if (digit == 0 || (digit&1)) {
		if (digit&1) {
			return false;
		}
		n /= 10;
	}
	// if the left-most digit is prime
	return isPrime(n);
}

/** @ drivers */
int main() {
	int currentTicket = 0, ticketCount = 0, legitCount = 0, luckyNumber = -1;
	while (true) {
		cout << "Nhap vao ma so ve (nhap -1 de dung): ";
		cin >> currentTicket;
		if (currentTicket == -1)
			break;
		ticketCount++;
		//
		if (isLegit(currentTicket)) {
			legitCount++;
			if (isLucky(currentTicket)) 
				luckyNumber = max(luckyNumber, currentTicket);
		}
	}
	//
	cout << "So luong ve hop le: " << legitCount << "\n";
	cout << "So luong ve khong hop le: " << ticketCount - legitCount << "\n";
	if (luckyNumber == -1)
		cout << "Khong co ve may man\n";
	else
		cout << "Ve may man: " << luckyNumber << "\n";
	return 0;
}

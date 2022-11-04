
#include <iostream>
using namespace std;

/** @ drivers */
int main() {
	// ios_base::sync_with_stdio(false); cin.tie(0);
	cout << "Please type in as the statement suggested.\n";

	// @ vars
	double first_num, second_num, answer;
	int    first_num_int, second_num_int;
	char   requested_operator;
	bool   error = false;

    // @ inp
    cin >> first_num >> second_num >> requested_operator;
    
    // @ cal
    switch (requested_operator) {
    	case '+':
    		answer = first_num + second_num;
    		break;
    	case '-':
    		answer = first_num - second_num;
    		break;
    	case '*':
    		answer = first_num * second_num;
    		break;
    	case '/':
    		if (second_num == 0.0) {
    			error = true;
    			cout << "can not execute this operator while the second number is zero\n";
    		}
    		answer = first_num / second_num;
    		break;
    	case '%':
    		cout << "WARNING: the numbers are casted into integers\n";
    		first_num_int = first_num;
    		second_num_int = second_num;
    		answer = first_num_int % second_num_int;
    		break;
    }

    // @ out
    if (!error) {
    	cout << first_num << " " 
    	     << requested_operator << " " 
    	     << second_num << " = " 
    	     << answer << "\n";
    }
	return 0;
}

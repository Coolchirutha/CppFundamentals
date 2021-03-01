#include <iostream>
using std::cout;
using std::endl;

bool compare(bool x) {
	cout << x << endl;
	return x;
}

bool compare(int x) {
	if (x >= 3) {
		cout << "number is less than 3" << endl;
		return true;
	}
	else {
		cout << "number is less than 3" << endl;
		return false;
	}
	
}
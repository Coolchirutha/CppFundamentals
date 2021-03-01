#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

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

void CSL() {
	string a, b;

	cout << "Enter a word: ";
	cin >> a;
	cout << "Enter another word: ";
	cin >> b;

	if (a.length() == b.length()) {
		cout << "The entered words have the same length." << endl;
	}
	else if (a.length() > b.length()) {
		cout << "The first entered word is longer than the second." << endl;
	}
	else if (a.length() < b.length()) {
		cout << "The second entered word is longer than the first." << endl;
	}
}
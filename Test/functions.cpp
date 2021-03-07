#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

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

	cout << "Enter a phrase: ";
	getline(cin, a);
	cout << "Enter another phrase: ";
	getline(cin, b);

	if (a.length() == b.length()) {
		cout << "The entered phrases have the same length." << endl;
	}
	else if (a.length() > b.length()) {
		cout << "The first entered phrases is longer than the second." << endl;
	}
	else if (a.length() < b.length()) {
		cout << "The second entered phrases is longer than the first." << endl;
	}
}

void vectortest() {
	vector<int> test;
	test.push_back(8);
	test.push_back(5);
	test.push_back(7);
	test.push_back(9);
	test.push_back(6);

	// Loop through all elements of the vector
	for (auto item : test) {
		cout << item << " ";
	}
	cout << endl;
	// Used to sort in increasing order
	sort(begin(test), end(test));
	for (auto item : test) {
		cout << item << " ";
	}

	// Used to count occurrances of the 3rd parameter in the vector
	int countInt = count(begin(test), end(test), 6);
	cout << countInt << endl;
}

// Find all permutations of a given string
void perm(string s, int k) {
	static int key[sizeof(s) / sizeof(s[0])];
	static char result[sizeof(s) / sizeof(s[0])];
	static int count = 0;
	int i;
	if (s[k] == '\0') {
		result[k] = '\0';
		std::cout << result << std::endl;
	}
	else {
		for (i = 0; s[i] != '\0'; i++) {
			if (key[i] == 0) {
				result[k] = s[i];
				count++;
				key[i] = 1;
				perm(s, k + 1);
				key[i] = 0;
			}
		}
	}
}
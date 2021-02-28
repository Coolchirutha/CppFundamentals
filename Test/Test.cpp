#include <iostream>
using std::cout;
using std::endl;

bool compare(bool x) {
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

int main()
{
	compare(true);
	compare(32);
	return 0;
}
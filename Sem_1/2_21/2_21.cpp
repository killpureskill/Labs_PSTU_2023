#include <iostream>
using namespace std;
int main() {
	int  tmp, next;
	bool ordered = true;
	cin >> tmp;
	while (tmp != 0) {
		cin >> next;
		if (next != 0 && next < tmp) {
			ordered = false;
		}
		tmp = next;
	}
	if (ordered) {
		cout << "+";
	}
	else {
		cout << "-";
	}
	return 0;
}
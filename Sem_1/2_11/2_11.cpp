#include <iostream>
using namespace std;
int main() {
	int n, x, max = -1000;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x > 0) {
			cout << "+" << endl;
			return 0;
		}
		if (x < 0) {
			cout << "-" << endl;
			return 0;
		}
	}
}
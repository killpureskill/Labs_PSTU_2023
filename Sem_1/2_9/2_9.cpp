#include <iostream>
using namespace std;
int main() {
	int n;
	int topheight;
	int b;
	cin >> n;
	topheight = (n / 2);
	for (int i = 1; i < topheight; i++) {
		if (i == 1) {
			for (int j = 0; j < topheight - i; j++) {
				cout << ' ';
			}
			for (int j = 0; j < n - 1; j++) {
				cout << "* ";
			}
			cout << "*" << endl;
		}
		else {
			for (int j = 0; j < topheight - i; j++) {
				cout << ' ';
			}
			cout << "*";
			for (int j = 0; j < (n - 2) * 2 + 1; j++) {
				cout << ' ';
			}
			cout << "*";
			for (int j = 0; j < i - 2; j++) {
				cout << " ";
			}
			cout << "*" << endl;
		}
		b = i - 2;
	}
	for (int i = 0; i < n; i++) {
		if ((i == 0) || (i == (n - 1))) {
			for (int j = 0; j < n; j++) {
				cout << "* ";
			}
			if (i == 0) {
				for (int j = 0; j < b; j++) {
					cout << " ";
				}
				cout << "*";
			}
			cout << endl;
		}
		else {
			cout << "*";
			for (int j = 0; j < (n - 2) * 2 + 1; j++) {
				cout << " ";
			}
			cout << "*";
			if (i <= topheight) {
				for (int j = 0; j < b + 1; j++) {
					cout << " ";
				}
				cout << "*" << endl;
			}

			else {
				for (int j = 0; j < b + 1; j++) {
					cout << " ";
				}
				b = b - 1;
				cout << "*" << endl;
			}
		}
	}
}
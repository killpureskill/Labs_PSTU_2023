#include <iostream>
using namespace std;
void Chess_order(int a, int b, int massiv[50][50]) {
	int k = 1;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if ((i + j) % 2 == 0) {
				if (k == 10) {
					k = 1;
				}
				massiv[i][j] = k;
				k += 1;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << massiv[i][j] << ' ';
		}
		cout << endl;
	}

}
int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	int massiv[50][50];
	cout << "Enter the number of rows in the array " << endl;
	cin >> a;
	cout << "Enter the number of columns in the array " << endl;
	cin >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			massiv[i][j] = 0;
			cout << massiv[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	Chess_order(a, b, massiv);
	return 0;
}
/*
Enter the number of rows in the array
5
Enter the number of columns in the array
6
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

1 0 2 0 3 0
0 4 0 5 0 6
7 0 8 0 9 0
0 1 0 2 0 3
4 0 5 0 6 0
*/
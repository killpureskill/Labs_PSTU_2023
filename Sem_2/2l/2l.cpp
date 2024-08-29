#include <iostream>
using namespace std;
void gldiag(int a, int massiv[50][50]) {
	int k = 1;
	for (int i = 0; i < a; i++) {
		k = 1;
		for (int j = i; j >= 0; j--) {
			massiv[i][j] = k;
			k += 1;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << massiv[i][j] << ' ';
		}
		cout << endl;
	}
}
int main() {
	int a;
	int massiv[50][50];
	cout << "Enter the dimension of a two-dimensional array " << endl;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			massiv[i][j] = 0;
			cout << massiv[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	gldiag(a, massiv);
	return 0;
}
/*
Enter the dimension of a two-dimensional array
6
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

1 0 0 0 0 0
2 1 0 0 0 0
3 2 1 0 0 0
4 3 2 1 0 0
5 4 3 2 1 0
6 5 4 3 2 1
*/
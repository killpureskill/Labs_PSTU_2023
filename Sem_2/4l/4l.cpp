#include<iostream>
using namespace std;
int main() {
	srand(time(NULL));
	int arr[100];
	int n, tmp;
	int suma = 0;
	int range_min = 0;
	int range_max = 9;
	int min = 9999;
	cout << "Enter the number of elements in the array (less than 100)" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (range_max - range_min + 1) + range_min;
		suma = suma + arr[i];
		if (arr[i] < min) {
			min = arr[i];
		}
		cout << arr[i] << " ";
	}
	cout << endl << "min value = " << min << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] == min) {
			for (int j = i; j < n - 1; j++) {
				arr[j] = arr[j + 1];
			}
			i--;
			n--;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		arr[n - i + 2] = arr[n - i - 1];
	}
	arr[0] = suma / n;
	arr[1] = suma / n;
	arr[2] = suma / n;
	n += 3;
	cout << "average value = " << (arr[0]) << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
/*
1 пример:
Enter the number of elements in the array (less than 100)
5
0 9 2 6 7
min value = 0
9 2 6 7
average value = 6
6 6 6 9 2 6 7

2 пример:
Enter the number of elements in the array (less than 100)
10
0 0 7 6 7 7 3 0 1 0
min value = 0
7 6 7 7 3 1
average value = 5
5 5 5 7 6 7 7 3 1

3 пример:
Enter the number of elements in the array (less than 100)
7
3 8 6 2 9 9 8
min value = 2
3 8 6 9 9 8
average value = 7
7 7 7 3 8 6 9 9 8
*/
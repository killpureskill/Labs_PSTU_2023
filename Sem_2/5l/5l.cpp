#include<iostream>
using namespace std;
void tablet(int kolvo_strok, int kolvo_ryadov, int array[50][50]) {
	bool flag = false;
	int suma1 = 0;
	int suma2 = 0;
	for (int i = 1; i < kolvo_ryadov - 1; i++) {
		suma1 = 0;
		suma2 = 0;
		for (int masr1 = 0; masr1 < i; masr1++) {
			for (int mass1 = 0; mass1 < kolvo_strok; mass1++) {
				suma1 = suma1 + array[mass1][masr1];
			}
		}
		for (int masr2 = i + 1; masr2 < kolvo_ryadov; masr2++) {
			for (int mass2 = 0; mass2 < kolvo_strok; mass2++) {
				suma2 = suma2 + array[mass2][masr2];
			}
		}
		cout << endl << i << '.' << " ����� ������� ����� = " << suma1 << " ����� ������� ������ = " << suma2;
		if (suma1 > suma2) {
			cout << endl << "������ ������� ����, ��� ����� " << i;
		}
	}
	if (flag == false) {
		cout << endl << "������� ������� ��� ";
	}
}
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int kolvo_strok, kolvo_ryadov;
	cout << "������� ���������� ����� � �������, � ����� ���������� ����� ( ������ 2 ) " << endl;
	cin >> kolvo_strok >> kolvo_ryadov;
	int array[50][50];
	int range_max = 9;
	int range_min = 0;

	for (int i = 0; i < kolvo_strok; i++) {
		for (int j = 0; j < kolvo_ryadov; j++) {
			array[i][j] = rand() % (range_max - range_min + 1) + range_min;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	tablet(kolvo_strok, kolvo_ryadov, array);
	return  0;
}
/*
1 ������:
������� ���������� ����� � �������, � ����� ���������� ����� ( ������ 2 )
3
10
0 6 0 2 4 3 9 3 4 3
4 4 0 5 6 7 5 9 1 0
4 7 4 5 3 1 7 4 9 9

1. ����� ������� ����� = 8 ����� ������� ������ = 103
2. ����� ������� ����� = 25 ����� ������� ������ = 99
3. ����� ������� ����� = 29 ����� ������� ������ = 87
4. ����� ������� ����� = 41 ����� ������� ������ = 74
5. ����� ������� ����� = 54 ����� ������� ������ = 63
6. ����� ������� ����� = 65 ����� ������� ������ = 42
������ ������� ����, ��� ����� 6
7. ����� ������� ����� = 86 ����� ������� ������ = 26
������ ������� ����, ��� ����� 7
8. ����� ������� ����� = 102 ����� ������� ������ = 12
������ ������� ����, ��� ����� 8

2 ������:
������� ���������� ����� � �������, � ����� ���������� ����� ( ������ 2 )
4
5
8 8 7 6 9
2 8 1 2 9
7 5 6 5 1
2 5 0 7 4

1. ����� ������� ����� = 19 ����� ������� ������ = 57
2. ����� ������� ����� = 45 ����� ������� ������ = 43
������ ������� ����, ��� ����� 2
3. ����� ������� ����� = 59 ����� ������� ������ = 23
������ ������� ����, ��� ����� 3

3 ������:
������� ���������� ����� � �������, � ����� ���������� ����� ( ������ 2 )
3
3
5 5 8
9 8 3
4 1 5

1. ����� ������� ����� = 18 ����� ������� ������ = 16
������ ������� ����, ��� ����� 1
*/
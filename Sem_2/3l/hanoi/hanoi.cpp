#include <iostream>
using namespace std;
void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "��������� ���� " << n << " � ����� " << A << " �� ����� " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "��������� ���� " << n << " � ����� " << A << " �� ����� " << C << endl;
    TOH(n - 1, B, A, C);
}
int main()
{
    setlocale(LC_ALL, "ru_RU");
    cout << "������� ���������� �����\n";
    int n;
    cin >> n;
    cout << "����� � - ����� �� ������� ��������� ������ �������\n";
    cout << "����� � - ������������� �����\n";
    cout << "����� � - ����� �� ������� ���� ��������� ������\n";
    TOH(n, 'A', 'B', 'C');
    return 0;
}
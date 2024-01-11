#include <iostream>
using namespace std;
int main()
{
	int a, b, sum = 0;
	int* ptr1, * ptr2;
	cin >> a >> b;
	ptr1 = &a;
	ptr2 = &b;
	sum = *ptr1 + *ptr2;
	cout << "sum - " << sum << endl;
	return 0;
}
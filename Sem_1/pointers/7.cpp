#include <iostream>
int main()
{
	int n;
	int* ptr = &n;
	cin >> *ptr;
	cout << n;
}
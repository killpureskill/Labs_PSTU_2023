#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	double x1, x2;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c < 0) {
		cout << "-" ;
	}
	else {
		(b * b - 4 * a * c >= 0);
		x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << x1 << endl << x2;

	}
}
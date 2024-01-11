#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x = 2, lambda = -0.2, xprev = 0, eps = 0.000001;
	while (abs(x - xprev) > eps) {
		xprev = x;
		x = xprev + lambda * (3 * xprev - 4 * log(xprev) - 5);
	}
	cout << x;
	return 0;
}
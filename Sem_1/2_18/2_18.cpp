#include <iostream>
using namespace std;
int main() {
    int n, k = 0, c;
    cin >> n;
    while (n > 0)
    {
        c = n % 10;
        k = k * 10 + c;
        n /= 10;
    }
    cout << k;
    return 0;
}
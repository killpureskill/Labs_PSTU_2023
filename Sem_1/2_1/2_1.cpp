#include <iostream>
using namespace std;
int main() {
    int a, n;
    int sum = 0;
    cin >> n;
    if (n <= 0) {
        cout << "no result";
    }
    else {
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
    }
    cout << sum;
}
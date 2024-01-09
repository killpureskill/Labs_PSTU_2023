#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    x = sqrt(n);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++)
        {
            cout << '* ';
        }
        cout << endl;
    }
}
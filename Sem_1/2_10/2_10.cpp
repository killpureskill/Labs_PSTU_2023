#include <iostream>
using namespace std;
int main()
{
    int n, x, max;

    cout << "dlina posledovatelnosti" << endl;
    cin >> n;

    cout << "1 chislo" << endl;
    cin >> max;

    for (int i = 2; i <= n; i++)
    {
        cout << "sled chislo" << endl;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }
    cout << "Max " << max << endl;
}
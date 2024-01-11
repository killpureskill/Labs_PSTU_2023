#include <iostream>
using namespace std;
int main()
{
    int n, tmp, * ptr = &tmp, max, min;
    cout << "long?:\n";
    cin >> n;
    cout << "Firts:\n";
    cin >> *ptr;
    max = *ptr;
    min = *ptr;
    for (int i = 2; i <= n; i++)
    {
        cin >> *ptr;
        if (*ptr > max) { max = *ptr; }
        else if (*ptr < min) { min = *ptr; }
    }
    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;
}
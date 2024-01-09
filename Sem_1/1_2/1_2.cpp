#include <iostream>
using namespace std;
int main() {
    int a, b;
    float c;
    cin >> a >> b;
    if (b == 0) {
        cout << "no result";
    }
    else {
        c = a / b;
        cout << c;
    }

}
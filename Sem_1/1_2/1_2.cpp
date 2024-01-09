#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    float c;
    cin >> a >> b;
    if (b == 0) {
        cout << "На ноль делить нельзя";
    }
    else {
        c = a / b;
        cout << c;
    }

}
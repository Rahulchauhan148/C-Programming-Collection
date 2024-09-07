#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter value of A: ";
    cin >> a;44

    cout << "Enter value of B: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << a << " is greater than " << b;
    }
    else if (a < b) {
        cout << a << " is less than " << b;
    }
    else {
        cout << "Both numbers are equal.";
    }

    return 0;
}

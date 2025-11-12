#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Valid triangle";
    else
        cout << "Invalid triangle";
    return 0;
}

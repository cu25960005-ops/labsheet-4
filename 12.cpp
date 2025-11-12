#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;
    cout << "Enter expression (a operator b): ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
    return 0;
}

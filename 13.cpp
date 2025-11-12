#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
        num = -num;
    cout << "Absolute value = " << num;
    return 0;
}

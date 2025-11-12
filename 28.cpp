#include <iostream>
using namespace std;

int main() {
    int low, high;
    cout << "Enter two numbers: ";
    cin >> low >> high;
    cout << "Prime numbers: ";
    for (int n = low; n <= high; n++) {
        bool isPrime = true;
        if (n < 2) continue;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << n << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false; // Found a divisor
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

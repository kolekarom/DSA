#include <iostream>
using namespace std;

// Recursive GCD function
int gcd(int a, int b) {
    if (b == 0)  // Base case
        return a;
    else
        return gcd(b, a % b);  // Recursive step
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;

    return 0;
}

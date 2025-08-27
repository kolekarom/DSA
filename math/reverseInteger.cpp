#include <iostream>
#include <limits.h>  // For INT_MAX and INT_MIN
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;  // Get the last digit

        // Check for overflow before updating `reversed`
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
            return 0;  // Return 0 if overflow happens

        reversed = reversed * 10 + digit;  // Add the digit to the reversed number
        n /= 10;  // Remove last digit from `n`
    }
    
    return reversed;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int result = reverseInteger(num);
    cout << "Reversed: " << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print first increasing sequence
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }

        // Print decreasing sequence
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

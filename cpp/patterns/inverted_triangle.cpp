#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    for (int i = 0; i < n; i++) {
        // Print numbers in decreasing length
        for (int j = 0; j < n - i; j++) {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}

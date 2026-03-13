#include <iostream>
#include <bitset>
using namespace std;

int main() {

    string octal;
    cin >> octal;

    int decimal = stoi(octal, 0, 8);   // octal → decimal
    cout << bitset<32>(decimal);       // decimal → binary
}
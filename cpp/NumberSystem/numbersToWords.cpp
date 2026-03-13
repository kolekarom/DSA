#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> ones = {"","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> teens = {"ten","eleven","twelve","thirteen","fourteen","fifteen",
                            "sixteen","seventeen","eighteen","nineteen"};
    vector<string> tens = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    int n;
    cin >> n;

    if(n >= 1000){
        cout << ones[n/1000] << " thousand ";
        n %= 1000;
    }

    if(n >= 100){
        cout << ones[n/100] << " hundred ";
        n %= 100;
    }

    if(n >= 20){
        cout << tens[n/10] << " ";
        n %= 10;
    }

    if(n >= 10 && n <= 19){
        cout << teens[n-10] << " ";
        n = 0;
    }

    if(n > 0){
        cout << ones[n];
    }

}
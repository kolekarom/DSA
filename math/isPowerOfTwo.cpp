#include<iostream>
using namespace std;

int isPowerOfTwo(int n){
    return (n > 0) && ((n & (n - 1)) == 0); //first ensure the number is positive , in it's binary representation all the bits are 1
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPowerOfTwo(n)){
        cout << n << " is a power of two";
    }else{
        cout << n << " is not a power of two";
    }
    return 0;

}
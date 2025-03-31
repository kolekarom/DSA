#include<iostream>
using namespace std;
int main(){
    int n = 1;
    int* p = &n;
    cout << "Address of n: " << p << endl;
    cout << "Value of n: " << &n << endl;
        cout << "Value of n: " << &p << endl;


    return 0;
}
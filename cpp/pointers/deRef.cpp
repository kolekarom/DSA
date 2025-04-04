#include<iostream>
using namespace std;
int main(){ 
    int a = 10;
    int *ptr;  
    ptr = &a;
    cout << &a << endl; // prints the memory address of a
    cout << ptr << endl; // prints the memory address of a
    cout << *ptr << endl; // prints the value of a
    *ptr = 20;
    cout << a << endl; // prints 20
    return 0;

}
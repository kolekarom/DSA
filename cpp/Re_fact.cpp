#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){

    cout <<"Factorial of 5 is "<<factorial(5)<<endl;
    return 0;
}
#include <iostream>
#include<algorithm>
using namespace std;


int fib(int n ){
        if (n == 0) return 0;
        if(n ==1) return 1;
        return fib(n-1 ) + fib(n-2);
}

int main (){
    int n;
    cout <<"enter n : ";
    cin >> n;

    cout << "fibonacci : " << fib(n);



    return 0;
}
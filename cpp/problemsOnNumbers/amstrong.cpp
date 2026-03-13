#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int sum = 0;
    int temp = n;
    while(temp > 0){
        int lastdigit = temp % 10;
        sum += lastdigit * lastdigit * lastdigit;
        temp /= 10;

    }
    if(sum == n){
        return true;
    }else{
        return false;
    }
}

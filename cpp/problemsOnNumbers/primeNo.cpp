#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n < 2){
        return false;
    }
    for(int i = 2; i* i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
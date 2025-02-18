#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans = 0 , pow = 1;
    
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans = ans + rem * pow;
        pow = pow * 10;
    }
    return ans;
}
int main(){
    // int decNum = 50;
    // cout << "Binary of " << decNum << " is " << decToBinary(decNum) << endl;
    int decNum;
    for (int i = 0 ; i < 10 ; i++){
        decNum = i;
        cout << "Binary of " << decNum << " is " << decToBinary(decNum) << endl;
    }
    return 0;
}
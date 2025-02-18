#include<iostream>
using namespace std;

int binaryToDec(int binaryNum){
    int ans = 0 ;
    int pow = 1;

    while(binaryNum > 0){
        int rem = binaryNum % 10;
        ans = ans + rem * pow;
        pow = pow * 2;
        binaryNum = binaryNum / 10;
    }
    return ans;//decimal form
}
int main(){
    cout << binaryToDec(1010) << endl;
    return 0;

}
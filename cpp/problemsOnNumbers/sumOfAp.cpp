#include<iostream>
using namespace std;
int main(){
    int n,a,d;
    cin >> n >> a >> d;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a + i * d;
    }
    cout << sum << endl;
}
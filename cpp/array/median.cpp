#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int > v = {1, 2, 3, 4, 5,6};
    sort(v.begin(), v.end());
    int n = v.size();
    if(n % 2 == 0){
        cout << (v[n/2] + v[n/2 - 1]) / 2.0 << endl;
    }
    else{
        cout << v[n/2] << endl;
    }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int target;
    cin >>target;
    int ans = -1;
    for(int i = 0; i < n; i++){
        if(v[i] == target){
            ans = i;
            break;
        }
    }
    cout << ans;
}
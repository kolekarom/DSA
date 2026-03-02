#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    int sum = 0;
    for(int x : v){
        sum += x;
    }
    cout << sum/n << endl;
    cout << sum << endl;
    cout << n << endl;
    return 0;
}
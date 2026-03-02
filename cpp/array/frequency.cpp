#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 1, 2, 3};
    unordered_map<int, int> freq;
    for(int x : v){
        freq[v[x]]++;
    }
    for(auto p : freq){
        cout << p.first << p.second<< endl;
    }
    return 0;
}
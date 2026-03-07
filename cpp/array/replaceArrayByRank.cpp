#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
    }
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    int r = 1;
    map<int, int> rank;
    for(int x : sortedArr){
        if(rank[x] == 0){
            rank[x] = r++;
        }
    }
    for(int x : arr){
        cout << rank[x] << " ";
    }

 }
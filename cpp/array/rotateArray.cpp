#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int k = 2;
    k = k % n;
    rotate(arr.begin(), arr.end() - k, arr.end());
    
    for(int x : arr){
        cout << x << " ";   
    }
    rotate(arr.begin(), arr.begin() + k, arr.end());
    cout << endl;
    for(int x : arr){
        cout << x << " ";   
    }
    
}
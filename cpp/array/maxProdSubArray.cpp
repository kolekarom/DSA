#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int maxProd = v[0];
    for(int i = 0; i < n; i++){
        int prod = 1;
        for(int j = i; j < n; j++){
            prod *= v[j];
            maxProd = max(maxProd, prod);    

        }
    }
    cout << maxProd;
}
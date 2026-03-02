#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector <int > v = { 4 , 2 , 235 ,34,435,24};

    sort (v.begin() , v.end());
    v.erase(v.begin());
    v.pop_back();
    for (int x : v){
        cout << x << "  ";
    }
    cout << endl;
    cout << v.at(2) << endl;


}
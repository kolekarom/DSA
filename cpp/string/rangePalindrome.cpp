#include<iostream>
#include<string>
using namespace std;
int main(){
    int min,max;
    cin >> min >> max;
    for(int i = min; i <= max;i++){
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(s == rev){
            cout << i << " ";
        }

    }
    return 0;

}
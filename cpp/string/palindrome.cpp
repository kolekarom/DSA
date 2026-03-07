#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(s == rev){
        cout << "Palindrome";
    } else {
        cout << "Not a Palindrome";
    }
    return 0;
}
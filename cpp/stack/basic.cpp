#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
using namespace std;


// using stl
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
         cout<<s.top()<<endl;
         s.pop();
    }

}

int main(){

}
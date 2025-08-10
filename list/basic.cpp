#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(23);
    l.push_front(20);
    
    auto it = l.begin();
    advance(it,5);

    l.insert(it,15);
    


    for( int val : l){
        cout<<val<<" ";

    }
    cout <<endl;
}
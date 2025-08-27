#include<iostream>
#include<queue>
using namespace std;

struct Person{
    string name;
    int age;
};
int main(){
    queue<Person> q;
    q.push({"John", 25});
    cout << q.front().name << endl;
    



    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // cout << q.front() << endl;
    // cout << q.back() << endl;
    // q.pop();
    // cout << q.front() << endl;
    return 0;
}
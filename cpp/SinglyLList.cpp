#include<iostream>
using namespace std;
//node structure
class Node{
    public:
    int data;
    Node* next;

    //constructure
    Node(int val){
        data = val;
        next = NULL;
    }
};
int main(){

    Node* node1 = new Node(30);
    Node* node2 = new Node(3);

    cout << "data1 :" << node1 -> data << endl;
    cout << "data2 :" << node2 -> data << endl;

    return 0;
}
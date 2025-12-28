#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    
    Node(int val){
        data = val;
        next = NULL;
    }
};
int main(){

    Node* node1 = new Node(30);
    Node* node2 = new Node(3);
    Node* node3 = new Node(300);

    cout << "data1 :" << node1 -> data << endl;
    cout << "data2 :" << node2 -> data << endl;
    cout << "data3 :" << node3 -> data << endl;

    return 0;
}
#include<iostream>
using namespace std;

class Node{ // Node class to represent a single node in a singly linked list
    public:
    int data;
    Node* next;

    
    Node(int val){ // Constructor to initialize the node with a value
        data = val;
        next = NULL;
    }
};
int main(){ // Main function to demonstrate the Node class

    Node* node1 = new Node(30);
    Node* node2 = new Node(3);
    Node* node3 = new Node(300);

    cout << "data1 :" << node1 -> data << endl;
    cout << "data2 :" << node2 -> data << endl;
    cout << "data3 :" << node3 -> data << endl;

    return 0;
}
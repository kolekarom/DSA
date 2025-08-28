#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main(){
    // vector<int > preorder= {8,5,1,7,10,12};

    Node* root = new Node(8);
    root->left = new Node(5);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(7);

    cout <<root->data << endl;
    cout <<root->left->data << endl;
    cout <<root->right->data << endl;
    cout <<root->left->left->data << endl;
    cout <<root->left->right->data << endl;
    

    return 0;
}
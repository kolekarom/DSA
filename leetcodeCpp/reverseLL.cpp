#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val; // this is the value of the node
    ListNode *next; // pointer to the next node in the list
    ListNode() : val(0), next(nullptr) {} // default constructor initializes value to 0 and next to nullptr
    ListNode(int x) : val(x), next(nullptr) {} // constructor initializes value to x and next to nullptr
    ListNode(int x, ListNode *nextNode) : val(x), next(nextNode) {} // constructor initializes value to x and next to nextNode
};

class Solution { // This class contains the method to reverse a linked list
public:
    ListNode* reverseList(ListNode* head) { // This method reverses the linked list
        ListNode* prev = nullptr; // previous node starts as nullptr
        ListNode* curr = head; // start with the head of the list
        while (curr != nullptr) { // iterate through the list until we reach the end
            ListNode* nextTemp = curr->next; // store next node
            curr->next = prev;              // reverse link 
            prev = curr;                    // move prev
            curr = nextTemp;                // move curr
        }
        return prev;
    }
};

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1); // head of the list
    head->next = new ListNode(2); // next node
    head->next->next = new ListNode(3); 
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Print original list
    cout << "Original list: "; // Print the original linked list
    ListNode* temp = head; // temporary pointer to traverse the list
    while (temp != nullptr) { // iterate through the list
        cout << temp->val << " "; // print the value of the current node
        temp = temp->next; // move to the next node
    }
    cout << endl; 

    // Reverse list
    Solution solution;
    ListNode* reversed_head = solution.reverseList(head);

    // Print reversed list
    cout << "Reversed list: ";
    while (reversed_head != nullptr) {
        cout << reversed_head->val << " ";
        reversed_head = reversed_head->next;
    }
    cout << endl;

    return 0;
}

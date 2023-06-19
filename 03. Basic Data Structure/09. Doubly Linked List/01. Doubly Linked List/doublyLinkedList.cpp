#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next =NULL;
    }
};
//! Print Liked List Normally 
void printNodeNormal(Node* head) {
    Node *tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<"\n";
}
//! print Linked List in reverse
void printLinkedListinReverse(Node *tail) {

    Node *tmp = tail;
    while(tmp!=NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }

}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    Node *tail = b;

    printNodeNormal(head);
    printLinkedListinReverse(tail); 
    
    return 0;
}
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
//! Insert At Tail 
void insertAtTail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if(tail==NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
} 

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
    cout<<endl;
    cout<<"-----------------------"<<endl;


}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true) {
        cin >> val;
        if(val == -1) 
             break;
        insertAtTail(head, tail, val);
    }
    printNodeNormal(head);
    printLinkedListinReverse(tail);
    return 0;
}
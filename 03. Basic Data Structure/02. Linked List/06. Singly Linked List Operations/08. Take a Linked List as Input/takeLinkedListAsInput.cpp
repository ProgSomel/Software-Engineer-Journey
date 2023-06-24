#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next =NULL;
    }
};

//! Linked list Input
void insertAtTail(Node *&head, int val) {
    Node *newNode = new Node(val);
      if(head == NULL) {
        head = newNode;
        return;
      }
      else {
        Node *tmp = head;
        while(tmp->next != NULL) {
            tmp = tmp->next;
      }
      tmp->next = newNode;
}
}

//! Print Linked List 
void printLinkedList(Node *head) {
    cout<<endl;
    cout<<"Your Linked List: ";
     Node *tmp = head;
     while(tmp!=NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
     }
     cout<<endl<<endl;
}


int main()
{ 
    int val;
    Node *head = NULL;
    while(true) {
        cin>>val;
        if(val == -1) break;
        insertAtTail(head, val);
    }
    printLinkedList(head);
    return 0;
}
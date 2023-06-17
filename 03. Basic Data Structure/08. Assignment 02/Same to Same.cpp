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
void insertAtTail1(Node *&head1, int val) {
    Node *newNode = new Node(val);
      if(head1 == NULL) {
        head1 = newNode;
        return;
      }
      else {
        Node *tmp = head1;
        while(tmp->next != NULL) {
            tmp = tmp->next;
      }
      tmp->next = newNode;
}
}
void insertAtTail2(Node *&head2, int val) {
    Node *newNode = new Node(val);
      if(head2 == NULL) {
        head2 = newNode;
        return;
      }
      else {
        Node *tmp = head2;
        while(tmp->next != NULL) {
            tmp = tmp->next;
      }
      tmp->next = newNode;
}
}

//! Checking same to same
bool isSameToSame(Node *head1, Node *head2) {
    while(head1!=NULL && head2!=NULL) {
        if(head1->val != head2->val) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if( head1 == NULL && head2 == NULL) {
        return true;
    }
    else {
        return false;
    }
       
    
} 

int main()
{ 
    int val;
    Node *head1 = NULL;
    Node *head2 = NULL;
    while(true) {
        cin>>val;
        if(val == -1) break;
        insertAtTail1(head1, val);
    }
    while(true) {
        cin>>val;
        if(val == -1) break;
        insertAtTail2(head2, val);
    }
    if(isSameToSame(head1, head2)) {
      cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}
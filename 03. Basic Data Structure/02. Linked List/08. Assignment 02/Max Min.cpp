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

//!Finding Max and Min 
void findMaxMin(Node *head) {
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    Node *tmp = head;
    while(tmp!=NULL) {
        if(tmp->val>maxValue) {
            maxValue = tmp->val;
        }
        if(tmp->val<minValue) {
            minValue = tmp->val;
        }
        tmp = tmp->next;

    }
    cout<<maxValue<<" "<<minValue<<endl;

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
    findMaxMin(head);
    while(head!=NULL) {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
    return 0;
}
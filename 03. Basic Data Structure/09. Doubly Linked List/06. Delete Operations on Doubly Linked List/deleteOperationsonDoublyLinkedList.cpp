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
    cout<<endl;
    cout<<"-----------------------"<<endl;


}

//! Getting Size of Liked List 
int sizeOfLikedList(Node *head) {
    Node *tmp = head;
    int cnt=0;
    while(tmp !=NULL) {
         cnt++;
         tmp = tmp->next;
    }
    return cnt;
    cout<<endl;
}

//! Delete head 
void deletehead(Node *&head) {
    Node *deletehead = head;
    head = head->next;
    head->prev = NULL;
    delete deletehead;


}





//!Delete at Any Position
void deleteAtAnyPosition(Node *head, int pos) {
    Node *tmp = head;
    for(int i = 1; i<=pos-1; i++) {
        tmp = tmp->next;
    }
    Node *deletedNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp ;
    delete deletedNode;
    
}

//!Delete tail 
void deleteTail(Node *&tail) {
    Node *deleteTail = tail;
    tail = tail->prev ;
    tail->next = NULL ;
    delete deleteTail ;
}


int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    Node *tail = c;
    printNodeNormal(head);
    printLinkedListinReverse(tail);
    int pos;
    cin>>pos;
    if(pos>=sizeOfLikedList(head)) {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==0) {
        deletehead(head);
    }
    else if(pos==sizeOfLikedList(head)-1) {
        deleteTail(tail);
    }
    else {
        deleteAtAnyPosition(head,pos);
    }
     printNodeNormal(head);
    printLinkedListinReverse(tail);
    return 0;
}
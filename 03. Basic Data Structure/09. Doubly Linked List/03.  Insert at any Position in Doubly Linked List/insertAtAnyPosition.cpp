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
//! Insert At Any Position 
void insertAtAnyPosition(Node *head, int pos, int val) {
   Node *newNode = new Node(val);
   Node *tmp = head;
   for(int i=1; i<=pos-1; i++) {
      tmp = tmp->next;
   }
   newNode->next = tmp->next;
   tmp->next = newNode;
   newNode->prev = tmp;
   newNode->next->prev = newNode; 

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
    
    cout<<"Size of Linked List is : "<<endl;
    cout<<sizeOfLikedList(head);
    cout<<endl;
    cout<<"Before Inserting Any Value LinkList values are : "<<endl;
    printNodeNormal(head);
    printLinkedListinReverse(tail); 

    cout<<"Want to insert any value ? "<<endl;
    char ans;
    cin >> ans;
    if(ans=='y') {
        cout<<"Enter a Position Where you want to insert : "<<endl;
        int pos;
        int val;
        cin >> pos;
        if(pos>=sizeOfLikedList(head)) {
            cout<<"Postion"<<" "<<pos<<" "<<"is Invalid"<<endl;
        }

        else {
              cout<<"Enter a value you want to insert : "<<endl;
        cin >> val;
        insertAtAnyPosition(head, pos, val);
        cout<<"After inserting "<<val<<" "<<"At position "<<pos<<" "<<"LinkList values are"<<endl;
         printNodeNormal(head);
          printLinkedListinReverse(tail);
        }
      
        
           
    }
   
  

    
    return 0;
}
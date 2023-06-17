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
      cout<<"Inserted at Tail"<<endl;
}
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
    cout<<"Inserted at Position"<<pos<<endl<<endl;
}

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
    Node *head = NULL;
    while(true) {
       
        cout<<"Option 1: Insert At Tail"<<endl;
        cout<<"Option 2: Print Link List"<<endl;
        cout<<"Option 3: Insert At Any Position"<<endl;
        cout<<"Option 4: Terminate"<<endl;
        
         int op;
        cin>>op;
        if(op==1) {
            int val;
            cout<<"Insert A Value: "<<endl;
            cin >> val;
            insertAtTail(head, val);
        }
        else if(op==2) {
            printLinkedList(head);

        }
        else if(op==3) {
            int pos, v;
            cout<<"Enter Position"<<endl;
            cin>>pos;
            cout<<"Enter value"<<endl;
            cin>>v;


            insertAtAnyPosition(head, pos, v);

        }
        else if(op==4) {
            break;
            
        }
    }

    return 0;
}
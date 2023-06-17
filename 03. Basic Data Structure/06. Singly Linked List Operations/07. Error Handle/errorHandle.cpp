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
        if(tmp == NULL) {
            cout<<endl<<"Invalid Position or Index! Can't insert"<<endl<<endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<"Inserted at Position"<<pos<<endl<<endl;
}

//! Insert At Head
void insertAtHead(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at Head"<<endl;
} 

//! Delete form Any Position 
void deleteFromAnyPosition(Node *head, int pos) {
    Node *tmp = head;
    for(int i = 1; i<=pos-1; i++) {
        tmp = tmp->next;
        if(tmp == NULL) {
            cout<<endl<<"Invalid Position or Index! Can't Delete"<<endl;
            return;
        }
    }
        if(tmp->next == NULL) {
            cout<<endl<<"Invalid Position or Index! Can't Delete"<<endl;
            return;
        }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<"Deleted Position: "<<pos<<endl;
    

}

//! Delete Head 
void deleteHead(Node *&head) {
    if(head==NULL) {
       cout<<endl<<"!Head is not Available"<<endl;
            return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<"Head deleted"<<endl<<endl;
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
    Node *head = NULL;
    while(true) {
       
        cout<<"Option 1: Insert At Tail"<<endl;
        cout<<"Option 2: Print Link List"<<endl;
        cout<<"Option 3: Insert At Any Position"<<endl;
        cout<<"Option 4: Insert At Head"<<endl;
        cout<<"Option 5: Delete From Any Position"<<endl;
        cout<<"Option 6: Delete Head"<<endl;
        cout<<"Option 7: Terminate"<<endl;
        
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
            if(pos == 0) {
                insertAtHead(head, v);
            }
            else {
            insertAtAnyPosition(head, pos, v);
                  
            }



        }
        else if(op == 4) {
               int val;
               cout<<"Enter value"<<endl;
               cin>>val;
               insertAtHead(head, val);
        }
        else if(op == 5) {
            int pos;
            cout<<"Enter A position"<<endl;
            cin>>pos;
            if(pos == 0) {
                deleteHead(head);

            }
            else {
                deleteFromAnyPosition(head, pos);
            }
            
        }
        else if(op == 6) {
            deleteHead(head);
        }
        else if(op==7) {
            break;
            
        }
    }

    return 0;
}
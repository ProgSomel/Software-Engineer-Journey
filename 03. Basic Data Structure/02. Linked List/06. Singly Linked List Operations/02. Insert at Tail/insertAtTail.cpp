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
      tmp = newNode;

}
}

void printLinkedList(Node *head) {
     Node *tmp = head;
     while(tmp!=NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
     }
}


int main()
{
    Node *head = NULL;
    while(true) {
        int op;
        cin>>op;
        cout<<"Option 1: Insert At Tail"<<endl;
        cout<<"Option 2: Print Link List"<<endl;
        cout<<"Option 3: Terminate"<<endl;

        if(op==1) {
            int val;
            cin >> val;
            insertAtTail(head, val);
        }
        else if(op==2) {
            printLinkedList(head);

        }
        else if(op==3) {
            break;
            
        }
    }

    return 0;
}
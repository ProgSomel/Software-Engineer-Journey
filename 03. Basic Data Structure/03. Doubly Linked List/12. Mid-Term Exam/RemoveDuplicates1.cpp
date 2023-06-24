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

//!Ascending Order
void linkListInAscendingOrder(Node *head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    Node* current = head;

    while (current != NULL) {
        Node* minNode = current;
        Node* tmp = current->next;

        while (tmp != NULL) {
            if (tmp->val < minNode->val) {
                minNode = tmp;
            }
            tmp = tmp->next;
        }

        int tmpData = current->val;
        current->val = minNode->val;
        minNode->val = tmpData;

        current = current->next;
    }
}

//!Deleting Duplicates
  void deleteDuplicates(Node* head) {
        Node *tmp = head;
        while(tmp->next!=NULL) {
            if(tmp->val==tmp->next->val) {
                tmp->next= tmp->next->next;
            }
            if(tmp->next == NULL) break;
            else if(tmp->val!=tmp->next->val) {
                tmp = tmp->next;
            }
            
        }
       
    }
//! Print Linked List 
void printLinkedList(Node *head) {
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
     linkListInAscendingOrder(head);
     deleteDuplicates(head);
     printLinkedList(head);
    return 0;
}
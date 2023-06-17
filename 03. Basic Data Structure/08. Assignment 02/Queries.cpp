#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkList(Node* head, Node* tail) {
    if (head == NULL) {
        return;
    }
    cout << head->val << " " << tail->val << endl;
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insertAtHead(head, tail, v);
        } else {
            insertAtTail(head, tail, v);
        }
        printLinkList(head, tail);
    }
    return 0;
}
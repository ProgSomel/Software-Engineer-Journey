#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int value;
    Node* prev;
    Node* next;

    Node(int val) {
        value = val;
        prev = NULL;
        next = NULL;
    }
};

int getLength(Node* head) {
    int length = 0;
    Node* current = head;

    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

void insert(Node*& head, Node*& tail, int index, int value) {
    int length = getLength(head);

    if (index < 0 || index > length) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else if (index == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } else if (index == length) {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    } else {
        Node* current = head;
        int count = 0;

        while (count < index) {
            current = current->next;
            count++;
        }

        newNode->prev = current->prev;
        newNode->next = current;
        current->prev->next = newNode;
        current->prev = newNode;
    }

    Node* temp = head;
    cout << "L -> ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = tail;
    cout << "R -> ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin >> n;

    while (n--) {
        int X, V;
        cin >> X >> V;
        insert(head, tail, X, V);
    }

    return 0;
}

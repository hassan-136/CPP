#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

// Insert at the end of circular doubly linked list
Node* add(Node* head, int value) {
    Node* temp = new Node(value);
    if (head == NULL) {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    Node* last = head->prev;

    last->next = temp;
    temp->prev = last;
    temp->next = head;
    head->prev = temp;

    return head;
}

// Display the circular doubly linked list
void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter size of linked list: ";
    cin >> n;

    cout << "Enter elements of linked list: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        head = add(head, value);
    }

    cout << "Elements of circular doubly linked list are: ";
    display(head);

    return 0;
}

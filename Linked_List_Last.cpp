#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* addLast(Node* head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        return newNode; // first node becomes head
    }

    Node* temp = head;
    while (temp->next != NULL) { // go to last node
        temp = temp->next;
    }
    temp->next = newNode; // link new node at end
    return head; // head doesn’t change 
}

// Function to display list
void display(Node* head) {
    cout << "Linked List: ";
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL; 
    int n, value;

    cout << "Enter size of linked list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        head = addLast(head, value); // add at the end
    }

    display(head);

    return 0;
}

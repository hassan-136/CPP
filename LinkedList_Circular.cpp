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

// Function to add node to circular linked list
Node* add(Node* head, int value) {
    Node* temp = new Node(value);
    if (head == NULL) {
        head = temp;
        head->next = head; // make it circular
        return head;
    }
    Node* curr = head;
    while (curr->next != head) {  
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head; // connect last node to head
    return head;
}

// Function to display circular linked list
void display(Node* head) {
    
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
    cout << "Enter size of circular linked list: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        head = add(head, value);
    }

    cout << "Circular linked list elements are: ";
    display(head);

    return 0;
}

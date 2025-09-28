#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* insert(Node* head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        newNode->next = head; 
        return head;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

void display(Node* head) {
   Node *temp =head;
   while(temp){
         cout<<temp->data<<" ";
         temp=temp->next;
         if(temp==head) break;
   }
}

Node* rotateLeft(Node* head, int N) {
    if (head == NULL || head->next == head) return head;

    int len = 1;
    Node* temp = head;
    while (temp->next != head) {
        len++;
        temp = temp->next;
    }

    N = N % len; // normalize rotations
    if (N == 0) return head;

    for (int i = 0; i < N; i++) {
        head = head->next;
    }
    return head;
}

int main() {
    Node* head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);

    cout << "Original Circular List: ";
    display(head);
    cout << endl;
    int rotations;
    cout << "Enter number of rotations: ";
    cin >> rotations;

    head = rotateLeft(head, rotations);

    cout << "After left rotation by " << rotations << ": ";
    display(head);

    return 0;
}

#include<iostream>
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

Node* Create(int arr[], int index, int size) {
    if (index == size) {
        return NULL;
    }
    Node* temp;
    temp = new Node(arr[index]);
    temp->next = Create(arr, index + 1, size);
    return temp;
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    Node* Head = Create(arr, 0, size);

    // Special case: if there's only one node
    if (Head->next == NULL) {
        delete Head;
        Head = NULL;
    }
    else {
        Node* curr = Head;
        Node* prev = NULL;
        
        while (curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }
        
        delete curr;
        prev->next = NULL;
    }

    // Print the list
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    delete[] arr;
    return 0;
}
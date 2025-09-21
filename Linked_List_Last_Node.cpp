#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedList(int count, int total) {
    if(count >= total) {
        return NULL;
    }
    
    int data;
    cout << "Enter data for node " << count + 1 << ": ";
    cin >> data;
    
    Node* temp = new Node(data);
    temp->next = CreateLinkedList(count + 1, total);
    return temp;
}

void PrintLinkedList(Node* head) {
    if(head == NULL) {
        cout << "NULL" << endl;
        return;
    }
    cout << head->data << " -> ";
    PrintLinkedList(head->next);
}



int main(){
    int size;
    cout << "Enter number of nodes: ";
    cin >> size;
    
    Node* head = CreateLinkedList(0, size);
    
    cout << "Linked List: ";
    PrintLinkedList(head);

    
    return 0;
}
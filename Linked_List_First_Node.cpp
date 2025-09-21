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
    
    Node* head = new Node(data);
    head->next = CreateLinkedList(count + 1, total);
    return head;
}

// This creates in reverse order! To fix it:

Node* CreateLinkedListCorrectOrder(int count, int total) {
    if(count >= total) {
        return NULL;
    }
    
    int data;
    cout << "Enter data for node " << count + 1 << ": ";
    cin >> data;
    
    Node* newNode = new Node(data);
    newNode->next = CreateLinkedListCorrectOrder(count + 1, total);
    return newNode;
}
// This STILL creates in reverse order because recursion builds from the end!

// The only way to maintain order with pure recursion is to use a helper function:
Node* CreateHelper(Node* head, int count, int total) {
    if(count >= total) return head;
    
    int data;
    cout << "Enter data for node " << count + 1 << ": ";
    cin >> data;
    
    if(head == NULL) {
        head = new Node(data);
        return CreateHelper(head, count + 1, total);
    }
    
    // Recursively traverse to the end
    head->next = CreateHelper(head->next, count, total);
    return head;
}
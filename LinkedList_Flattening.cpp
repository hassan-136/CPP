class Solution {
public:
    // Merge two sorted bottom-linked lists
    Node* merge(Node* a, Node* b) {
        if (!a) return b;
        if (!b) return a;

        Node* result;
        if (a->data < b->data) {
            result = a;
            result->bottom = merge(a->bottom, b);
        } else {
            result = b;
            result->bottom = merge(a, b->bottom);
        }
        result->next = NULL;  // Ensure no 'next' pointer in final list
        return result;
    }

    Node *flatten(Node *root) {
        // Base cases
        if (!root || !root->next) 
            return root;

        // Flatten the rest of the list
        root->next = flatten(root->next);

        // Merge this list with the flattened next list
        root = merge(root, root->next);

        return root;
    }
};
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* bottom;
    Node(int value) {
        data = value;
        next = NULL;
        bottom = NULL;
    }
};

    // Merge two sorted bottom-linked lists
    Node* merge(Node* a, Node* b) {
        if (!a) return b;
        if (!b) return a;

        Node* result;
        if (a->data < b->data) {
            result = a;
            result->bottom = merge(a->bottom, b);
        } else {
            result = b;
            result->bottom = merge(a, b->bottom);
        }
        result->next = NULL;  // Ensure no 'next' pointer in final list
        return result;
    }

    Node *flatten(Node *root) {
        // Base cases
        if (!root || !root->next) 
            return root;

        // Flatten the rest of the list
        root->next = flatten(root->next);

        // Merge this list with the flattened next list
        root = merge(root, root->next);

        return root;
    }

Node* Create(int arr[], int index, int size) {
    if (index == size) {
        return NULL;
    }
    Node* temp = new Node(arr[index]);
    temp->next = Create(arr, index + 1, size);
    return temp;
}
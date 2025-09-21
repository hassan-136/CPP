// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// Node* addFirst(Node* head, int value) {
//     Node* newNode = new Node(value);
//     newNode->next = head; 
//     return newNode;       // new head
// }

// // Function to display list
// void display(Node* head) {
//     cout << "Linked List: ";
//     while (head != NULL) {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     int n, value;

//     cout << "Enter size of linked list: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;
//         head = addFirst(head, value); // always update head
//     }

//     display(head);

//     return 0;
// }

#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next =NULL;
    }
};
Node *add(Node *head,int value){
    Node *temp = new Node(value);
        temp->next=head;
        return temp;
    }
int main(){
    Node *head=NULL;
    int size;
    cout<<"Enter size:";
    cin>>size;
    int value;
    for(int i=0;i<size;i++){
      cin>>value;
        head=add(head,value);
    }
    cout<<"Linked List: ";
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
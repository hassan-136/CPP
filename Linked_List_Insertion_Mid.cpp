// #include<iostream>
// using namespace std;
// class Node{
//   public:
//   int data;
//   Node *next;
//   Node(int value){
//       data=value;
//       next =NULL;
//   }
// };
// Node * Create(int arr[], int index,int size){
//     if(index==size){
//         return NULL;
//     }
//     Node* temp = new Node(arr[index]);
//     temp->next= Create(arr,index+1,size);
//     return temp;
// }
// int main(){
//     int size;
//     cout<<"Enter size:";
//     cin>>size;
//     int *arr = new int[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
  
//     Node *head= Create(arr,0,size);
//     Node *temp =head;
//       Node * slow=head;
//     Node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//      slow=slow->next;
//      fast=fast->next->next;
//      //cout<<slow->data;
     
//     }
//     Node *temporary= new Node(20);
//     temporary->next=slow->next;
    
//     slow->next=temporary;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
#include<iostream>
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

Node* Create(int arr[], int index, int size) {
    if (index == size) {
        return NULL;
    }
    Node* temp = new Node(arr[index]);
    temp->next = Create(arr, index + 1, size);
    return temp;
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    Node *head = Create(arr, 0, size);
    Node *temp = head;

    // find middle with slow & fast
    Node *prev = NULL;
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;          // track node before slow
        slow = slow->next;
        fast = fast->next->next;
    }

    // create new node
    Node *temporary = new Node(20);

    if (prev == NULL) { // if list had 1 element
        temporary->next = head;
        head = temporary;
    } else {
        prev->next = temporary;
        temporary->next = slow;
    }

    // print final list
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    delete[] arr;
    return 0;
}

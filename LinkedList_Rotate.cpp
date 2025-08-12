// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value){
//         data = value;
//         next= NULL;
//     }
// };

// Node *Create(int arr[],int index, int size){
//     if(index==size){
//         return NULL;
//     }
//     Node *temp = new Node(arr[index]);
//     temp->next = Create(arr,index+1,size);
//     return temp;
// }

// int main(){
//     int size;
//     cout<<"Enter size:";
//     cin>>size;
//     int *arr=new int [size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     Node *head = Create(arr,0,size);

//     int k;
//     cout<<"Enter rotations:";
//     cin>>k;
//     int count=0;
//     Node *temp=head;
// while(temp){
//     count++;
//     temp=temp->next;
// }
// k=k%count;
// count-=k;
// Node *prev = NULL;
// Node *curr= head;
// while(count--){
//     prev = curr;
//     curr=curr->next;
// }
// prev->next= NULL;
// Node *tail = curr;
// while(tail->next!=NULL){
//     tail= tail->next;
// }
// tail->next = head;
// head = curr;
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
// }
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
    Node* temp = new Node(arr[index]);
    temp->next = Create(arr, index + 1, size);
    return temp;
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    
    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    Node* head = Create(arr, 0, size);
    delete[] arr; // Free allocated memory

    int k;
    cout << "Enter rotations: ";
    cin >> k;
    
    // Handle empty list case
    if (head == NULL) {
        cout << "Empty list!" << endl;
        return 0;
    }
    
    // Count nodes
    int count = 1;
    Node* tail = head;
    while (tail->next != NULL) {
        count++;
        tail = tail->next;
    }
    
    // Calculate effective rotations
    k = k % count;
    if (k == 0) {
        // No rotation needed
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        return 0;
    }
    
    // Find new tail (count - k nodes from start)
    Node* new_tail = head;
    for (int i = 1; i < count - k; i++) {
        new_tail = new_tail->next;
    }
    
    // Perform rotation
    Node* new_head = new_tail->next;
    new_tail->next = NULL;
    tail->next = head;
    
    // Print rotated list
    Node* current = new_head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    
    return 0;
}
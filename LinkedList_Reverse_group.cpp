

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next= NULL;
    }
};

Node *Create(int arr[],int index, int size){
    if(index==size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = Create(arr,index+1,size);
    return temp;
}
Node* reverseKGroup(Node* head, int k) {
    if (!head) return NULL;

    // Count nodes ahead
    Node* temp = head;
    int count = 0;
    while (temp && count < k) {
        temp = temp->next;
        count++;
    }

    // If nodes < k, don't reverse
    if (count < k) return head;

    // Reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    count = 0;

    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recurse on remaining
    head->next = reverseKGroup(next, k);

    return prev; // new head of this group
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int *arr=new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k:";
    cin>>k;
    Node *head = Create(arr,0,size);
    head = reverseKGroup(head, k);
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
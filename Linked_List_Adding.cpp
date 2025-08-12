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

Node* reverse(Node* curr, Node* prev){
    if(curr==NULL){
        return prev;
    }
    Node * front = curr->next;
    curr->next = prev;
    return reverse(front , curr);
}

Node *Create(int arr[],int index, int size){
    if(index==size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = Create(arr,index+1,size);
    return temp;
}

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int *arr=new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Node *head = Create(arr,0,size);
    Node *head2 = Create(arr,0,size); // second list

    head  = reverse(head,NULL);
    head2 = reverse(head2,NULL);

    Node* curr1 = head;
    Node* curr2 = head2;   // <-- FIXED
    int carry = 0;         // <-- FIXED
    int sum = 0;

    Node *Head = new Node(0); // dummy node
    Node* tail = Head;        // <-- FIXED (tail starts at Head)

    while(curr1 && curr2){
        sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum % 10);
        carry = sum / 10;

        tail = tail->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    while(curr1){
        sum = curr1->data + carry;
        tail->next = new Node(sum % 10);
        carry = sum/10;
        tail = tail->next;
        curr1 = curr1->next;
    }

    while(curr2){
        sum = curr2->data + carry;
        tail->next = new Node(sum % 10);
        carry = sum/10;
        tail = tail->next;
        curr2 = curr2->next;
    }

    while(carry){
        tail->next = new Node(carry % 10);
        carry = carry / 10;
        tail = tail->next;
    }

    Head = reverse(Head->next,NULL);

    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

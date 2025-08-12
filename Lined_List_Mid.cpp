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

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int *arr=new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Node *Head = Create(arr,0,size);
    // int count=0;
    // Node *temp=Head;
    // while(temp!=NULL){
    //     count++;
    //     temp = temp->next;
    // }
    // int mid = count/2;
    // temp=Head;
    // while(mid--){ 
    //     temp=temp->next;
    // }
    Node *slow=Head;
    Node* fast = Head;
    while(fast!=NULL && fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;

    }

    cout<<"Mid Element is: "<<slow->data<<endl;
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}
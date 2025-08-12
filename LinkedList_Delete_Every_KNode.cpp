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
    int k;
    cout<<"Enter node :";
    cin>>k;
    Node *curr=Head;
    Node *prev =NULL;
    int count=1;
    if(k==1){
        Head=NULL;
        return 0;
    }
    while(curr){
        if(k==count){
            prev->next= curr->next;
            delete curr;
            curr= prev->next;
            count=1;
        }
        else{
            prev = curr;
            curr = curr->next;
            count++;
        }
    }
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}
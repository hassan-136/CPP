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
    cout<<"Enter Node to delete:";
    int k;
    cin>>k;
    Node *Head = Create(arr,0,size);

    int count=0;
    Node * temp=Head;
    while(temp){
        count++;
        temp=temp->next;
    }
     Node *prev =NULL;
    Node *curr= Head;

    count-=k;
    if(count==0){
      Head=Head->next;
      delete curr;
       
    }
   
while(count--){
    prev = curr;
    curr=curr->next;
}
prev->next=curr->next;
delete curr;
    

    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}
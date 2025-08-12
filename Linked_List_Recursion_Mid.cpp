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
    int x=2;
    int value =20;
    Node *temp =Head;
    x--;
    while(x--){
        temp= temp->next;
    }
    Node *newNode = new Node(value);    
    newNode->next = temp->next;
    temp->next = newNode;
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}
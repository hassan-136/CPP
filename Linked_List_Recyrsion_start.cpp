#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node *next;
    Node(int value){
        data= value;
        next= NULL;
    }
};

Node* Create(int arr[],int index,int size, Node *prev){
    if(index==size){
        return prev;
    }
    Node *temp =new Node(arr[index]);
    temp->next = prev;
    return Create(arr,index+1,size,temp);

}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int *arr = new int[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    Node *Head = Create(arr,0,size,NULL);
    
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
    
    return 0;
}
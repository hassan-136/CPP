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
    Node *head = Create(arr,0,size);

    Node* curr= head->next;
    Node* prev = head;
    while(curr){
        if(curr->data== prev->data){
            prev ->next= curr->next;
            delete curr;
            curr = prev->next;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        }
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
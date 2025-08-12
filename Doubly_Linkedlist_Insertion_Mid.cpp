#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value){
        data= value;
        prev =NULL;
        next=NULL;
    }
};

Node * Create(int arr[],int index,int size,Node *back){
    if(index==size){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next= Create (arr,index+1,size,temp);
    return temp;
}
int main(){
    cout<<"Enter size:";
    int size;
    cin>>size;
    int*arr= new int [size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter position:";
    int position;
    cin>>position;
   
    Node *head = Create(arr,0,size,NULL);
     Node *curr = head;
     while(--position){
        curr = curr->next;
     }
     Node *temp;
     temp = new Node(100);
     temp->next = curr->next;
     temp->prev= curr;
     curr->next = temp;
     temp->next->prev = temp;

    Node *tempp = head;
    while(tempp){
        cout<<tempp->data<<" ";
        tempp = tempp->next;
    }
}
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
     Node * curr= head;
        int count0 =0;
         int count1 =0;
          int count2 =0;
        while(curr){
            if(curr->data==0){
                count0++;
            }
            else if(curr->data==1){
                count1++;
            }
            else{
                count2++;
            }
            curr= curr->next;
        }
        curr = head;
        while(count0--){
            curr->data=0;
            curr=curr->next;
        }
        while(count1--){
            curr->data=1;
            curr=curr->next;
        }
        while(count2--){
            curr->data=2;
            curr=curr->next;
        }
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
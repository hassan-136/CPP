#include<iostream>
using namespace std;
;
class Node{
    public:
    int data ;
    Node *next;
    Node(int value){
        data=value;
        next = NULL;
    }
};
int main(){
    int arr[4]={1,2,3,4};
    Node *Head;
    Head= NULL;
    Node *tail = NULL;
    for(int i=0;i<4;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);
    tail = Head;
        }
        else{
          tail->next= new Node(arr[i]);
            tail= tail->next;
        }
    }

    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}
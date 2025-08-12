#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data= value;
  prev =NULL;
  next = NULL;
    }

};

int main(){
    Node *head = new Node (1);
    Node *temp= new Node(2);
    head->next = temp;
    temp->prev = head;
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
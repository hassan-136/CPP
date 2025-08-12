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
    Node *temp= head;
    int count=0;
    while(temp){
        count++;
        temp =temp->next;
    }
    Node *curr=head;
    Node *prev = NULL;
    count/=2;
    while(count--){
        prev= curr;
        curr= curr->next;
    }

    Node *temporary= curr;
    Node * previous = NULL;
    while(temporary){
        Node *front = temporary->next;
        temporary->next=previous;
        previous = temporary;
        temporary = front;
    }
    Node *head1=head;
    Node*head2 = previous;
    while(head1 && head2){
        if(head1->data != head2->data){
            cout<<"Not a Palindrome"<<endl;
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    cout<<"Palindrome"<<endl;

  
}
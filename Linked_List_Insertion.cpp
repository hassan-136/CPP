// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data=value;
//         next= NULL;
//     }
// };

// int main(){
//     int arr[4]= {1,2,3,4};

//     Node *Head;
//     Head = NULL;
// for(int i=0;i<4;i++){
//     if(Head==NULL){
//         Head = new Node (arr[i]);
//     }
//     Node *temp;
//     temp = new Node(arr[i]);
//     temp->next = Head;
//     Head = temp;
// }

// while(Head!=NULL){
//     cout<<Head->data<<"->";
//     Head = Head->next;
// }

// }

#include<iostream>
using namespace std;
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
    Node *Head;
    Head= NULL;
    int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);

        }
        else{
            Node *temp;
            temp = new Node(arr[i]);
            temp->next= Head;
            Head = temp;
        }
    }
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head= Head->next;
    }
}
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node * left, *right;
    Node(int value){
        data = value;
        left = right = NULL;    
    }
};

int main(){
    int x;
    cout<<"Enter  value:";
    cin>>x;
    Node *root =new Node(x);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<"Enter left child of "<<temp->data<<":";
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right child of "<<temp->data<<":";
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
    cout<<"Level Order Traversal: ";
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
#include<iostream>
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

Node * Binary_Tree(){
    int x;
    cin>>x;
    if (x==-1){
        return NULL;
    }
    Node * temp = new Node(x);
    temp->left= Binary_Tree();
    temp->right= Binary_Tree();
    return temp;
}
void preorder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
   Node * root= Binary_Tree();
    cout<<"Tree Created Successfully";
   // Node * root = Binary_Tree();
    preorder(root);
 

}
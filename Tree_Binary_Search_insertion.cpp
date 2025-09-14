#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left , *right;
    Node(int value){
        data= value;
        left=nullptr;
        right= nullptr;

    }
};

Node * insert(Node * root , int target){
    if(!root){
    Node * temp = new Node(target);
    return temp;
    }
    if(target<root->data){
        root->left= insert(root->left,target);
    
    }
    else{
        root->right= insert(root->right,target);
    }
    return root;

}
void inorder(Node * root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(Node* root , int target){
    if(!root){
        return 0;
    }
    if(root->data==target){
        return 1;
    }
    if(root->data>target){
        return search(root->left,target);
    }
    else{
        return search(root->right,target);
    }
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int * arr = new int [size];
    cout<<"Enter elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    int target;
    cin>>target;
    Node * root = nullptr;
    for(int i=0;i<size;i++){
        root= insert(root,arr[i]);
    }
    cout<<"Elements inserted successfully"<<endl;
    inorder(root);
    cout<<search(root,target);
}
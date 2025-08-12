#include<iostream>
using namespace std;
bool Binary_Search(int arr[],int start, int end,int key){
    if(start>end)
    return 0;
    int mid= start+(end-start)/2;
    if(arr[mid]==key){
        return 1;

    }
    else if(arr[mid]<key){
        return Binary_Search(arr,mid+1,end,key);
    }
    else{
        return Binary_Search(arr,start,mid-1,key);  
    }
}
int main(){
    int size  ;
    cout<<"Enter size:";
    cin>>size;
    int * arr = new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key";
    cin>>key;
    cout<<Binary_Search(arr,0,size-1,key);
}
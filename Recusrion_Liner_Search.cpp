#include<iostream>
using namespace std;
bool linear(int arr[],int n , int index,int key){
    if(index>n){
        return 0;
    }
    if(arr[index]==key){
        return 1;
    }
    else{
        return linear(arr,n,index+1,key);
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
    cout<<linear(arr,size,0,key);
}
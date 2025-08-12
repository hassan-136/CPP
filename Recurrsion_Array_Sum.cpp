#include<iostream>
using namespace std;
int sum(int arr[], int n , int index){
    if(index==n){
        return 0;
    }
    return arr[index]+sum(arr, n,index+1);
}
int main(){
    int size;
    cout<<"enter size:";
    cin>>size;
    int * arr = new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,size,0);
}
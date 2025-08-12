#include<iostream>
using namespace std;
int minelement(int arr[], int n , int index){

    if(index==n-1){
        return arr[index];
    }
    return min(arr[index],minelement(arr,n,index+1));
}
int main(){
    int size;
    cout<<"enter size:";
    cin>>size;
    int * arr = new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<minelement(arr,size,0);
}
#include<iostream>
#include<vector>
using namespace std;
bool find(int arr[],int index,int n,int target){
    if(target==0){
        
    return 1; 
}
    if(index==n || target<0){
        return 0;
    }
    return find(arr,index+1,n,target )|| find (arr,index+1,n,target-arr[index]);
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int * arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target:";
    cin>>target;
    cout<<find(arr,0,size,target);
}
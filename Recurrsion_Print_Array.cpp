#include<iostream>
using namespace std;
void print(int arr[], int n,int index){
    
    if(index==n){
        return;
    }
     cout<<arr[index]<<" ";
 
    print(arr,n,index+1);
       // cout<<endl;
    cout<<arr[index]<<" ";
}
int main(){
    int size ;
    cout<<"Enter size:";
    cin>>size;
    int * arr = new int {size};
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    print(arr,size,0);
    delete []arr;
}
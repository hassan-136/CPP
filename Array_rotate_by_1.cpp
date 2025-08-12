#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int temp=arr[4];
    for(int i=5-2 ;i>=0;i--){
        arr[i+1]=arr[i];
       
    }
     arr[0]=temp;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
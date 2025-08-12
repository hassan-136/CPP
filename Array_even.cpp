#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++){
    //     if(arr[i]%2==0){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter size:";
    cin>>num;
    int arr[1000];
    for(int i=0;i<num;i++){
        cin>>arr[i];
for(int i=1;i<num;i++){
    int current =arr[i];
    int prev=i-1;
    while(prev>=0 && arr[prev]>current){
        swap(arr[prev+1],arr[prev]);
        prev--;
    }
}
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
        //Other Method
    // for(int i=1;i<num;i++){
    //     for(int j=i;j>0;j--){
    //         if(arr[j]<arr[j-1]){
    //             swap(arr[j],arr[j-1]);
    //         }
    //         else{
    //             break;
    //         }
    //     }
    // }
}
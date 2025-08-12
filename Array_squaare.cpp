#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int arr2[3];
    for(int i=0;i<3;i++){
     arr2[i]=arr[i]*arr[i];
    }
    for(int i=0;i<3;i++){
        cout<<arr2[i]<<" ";
    }
    
}
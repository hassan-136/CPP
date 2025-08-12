#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    int arr[1000];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target:";
    cin>>target;
    if(target < 0 ){
        target*=-1;
    }
    int start=0;
    int end = 1;
    while(end<num){
        if(arr[end]-arr[start]==target){
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if ( arr[end]-arr[start]<target){
            end++;
        }
        else {
            start++;
        }
        if (start==end){
            end++;
        }
    }

}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int arr[1000];
    for(int i=0;i<num;i++){
        cin>>arr[i];

    }
    int start=0;
    int end=num-1;
    int peak =0;
 while(start<=end){
    int mid =start+(end-start)/2;
    if(arr[mid]>arr[mid+1]&& arr[mid ]>arr[mid-1]){
        peak=mid;
        break;
    }
    else if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
 }
 cout<<peak;
}

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num:";

    int arr[1000];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int start=0;int end =num-1; int ans=num;
    while(start<=end){
        int mid =start+(end-start)/2;

        if(arr[mid]-mid-1>=k){
            ans =mid;
            end = mid - 1; // Move left to find a smaller index
        }
        else{
            start = mid + 1; // Move right to find a larger index
        }
    }
    cout<<ans+k<<endl; // The k-th missing number is at index ans + k
}
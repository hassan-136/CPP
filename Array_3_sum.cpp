#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter num";
    cin>>num;;
    int arr[1000];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int k ;
    cout<<"Enter target:";
    cin>>k;
    for(int i=0;i<num-2;i++){
       int ans = k- arr[i];
    
   int  start = i+1;
   int  end = num-1;
    while(start<end){
        if(arr[start]+arr[end]==k){
            cout<<arr[start]<<" "<<arr[end]<<" "<<endl;
      break;
            
        }
        else if(arr[start]+arr[end]<k){
            start++;
        }
        else{
            end--;
        }
    }
}
}
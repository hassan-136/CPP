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
    int start=0;
    int end=num-1;
    int ans=arr[0];
    while(start<=end){
        int mid =start+(end-start)/2;
 if(arr[mid]>=ans){
    start=mid+1;
}    
else {
    ans =arr[mid];
    end=mid-1;  
}
}
 cout<<"Minimum element is "<<ans<<endl;

}
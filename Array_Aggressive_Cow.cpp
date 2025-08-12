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
    cout<<"Enter num of cows:";
    cin>>k;
    int start= 1;
    int end =arr[num-1]-arr[0];
    while(start<=end){
int mid= start+(end-start)/2;
int cows=1;
int pos = arr[0];
for(int i=1;i<num;i++){
    if(pos+mid<=arr[i]){
        cows++;
        pos=arr[i];
    }
}
if(cows<k){
    end=mid-1; // If we have fewer cows than required, we need to reduce the distance

    }
else{
    start=mid+1; // If we have enough cows, we can try to increase the distance
}
    }
    cout<<end<<endl;
}
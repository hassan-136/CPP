#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter um:";
    cin>>num;
    int arr[1000];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int prefix =0;
    int maxi=INT16_MIN;
    for(int i=0;i<num;i++){
    prefix+=arr[i];
    maxi=max(maxi,prefix);
    if(prefix<0){
        prefix=0;
    }
    }

    cout<<maxi;
}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    int arr [1000];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<num;i++){
        sum+=arr[i];
    }
    int prefix =0;
    int ans;
    for(int i=0;i<num-1;i++){
        prefix+=arr[i];
        ans= sum-prefix;
        if(prefix==ans){
            cout<<"YES"<<endl;
            return 0;
        }
    }
}
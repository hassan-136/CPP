#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int candidate =0;int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            candidate=arr[i];
        }
        else{
            if(candidate==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>(n/2)){
        cout<<"Majority element is:"<<candidate;
    }
    else{
        cout<<"No majority element";
    }
}
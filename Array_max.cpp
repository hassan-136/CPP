#include<iostream>
using namespace std;
int main(){
    int min = INT16_MIN;
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    cout<<min;
}
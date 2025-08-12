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
    int max_left=0 ;
    int max_right=0;
    int max_height=arr[0];
    int index=0;
    int water=0;
    for(int i=0;i<num;i++){
        if(arr[i]>max_height){
            max_height=arr[i];
            index=i;
        }
    }
    //Left Part

    for(int i=0;i<index;i++){
        if(max_left>arr[i]){
            water+=max_left-arr[i]; 

        }
        else{
            max_left=arr[i];
        }
    }
    //Right Part
    for(int i=num-1;i>index;i--){
        if(max_right>arr[i]){
            water+=max_right-arr[i];
        }
        else{
            max_right=arr[i];
        }
    }
    cout<<water;
}
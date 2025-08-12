#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    int arr[1000];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int start=0;
    int end =num-1;

    while(start<end){
        if(arr[start]==0){
start++;

        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++; end--;
            }
            else {
                end--;
            }
        }
    }
    cout<<"Array after segregation: ";
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    
}
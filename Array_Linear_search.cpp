#include<iostream>
using namespace std;
int main(){
    int index=-1;
    int key=10;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            index =i;
        }
    }
    cout<<index;
}
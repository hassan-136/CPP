#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n];
    }
    //Missing
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<"Missing num was:"<<i+1;
        }
    }
        //Repeated
        for(int i=0;i<n;i++){
            if(arr[i]/7>1){
                cout<<"Repeated num was:"<<i+1;
            }
        }
}
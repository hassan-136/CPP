#include<iostream>
using namespace std;
int main(){

    //Time complexity(O(n^2))


    int num;
    cout<<"Enter  number:";
    cin>>num;
    int arr[1000];
    cout<<"Enter "<<num<<" elements of array:"<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++){
       // int index =i;
        for(int j=i+1;j<num;j++){
            if(arr[j]<arr[i]){
                swap(arr[j], arr[i]);
            }
            
        }
      
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}
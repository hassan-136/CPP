#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    int arr[100];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to insert:";
    cin >> key;
    int start=0;
    int end=num-1;
    int index=0;
    while(start<=end){
        int mid= start+ (end-start)/2;
        if(arr[mid]==key){
            index =mid;
            break;
        }
        else if(arr[mid]<key){
           // start = mid + 1;
            index =mid+1; 
        }
        else{
             index =mid;
            end = mid - 1;
           
        }
    }
    cout<<"Element should be inserted at index: "<<index<<endl;
}
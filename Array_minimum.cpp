#include<iostream>
using namespace std;
int main(){
    int max=100;
   int arr[5];
   int i=0;
   for( i;i<5;i++){
    cin>>arr[i];
    }
    for(i=0;i<5;i++){
    if(arr[i]<max){
        max=arr[i];
    }
   
}
 cout<<max;
}
#include<iostream>
#include<vector>
using namespace std;
void subsequnce(int arr[],int index,int n ,int sum){
   if(index==n){
   cout<<sum<<endl;
    return ;
   }
   subsequnce(arr,index+1,n,sum);
 
   subsequnce(arr,index+1,n,sum+arr[index]);
  
}

int main(){
    int size;
    cout<<"Eneter size:";
    cin>>size;
    int * arr = new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
     int sum=0;
    
    subsequnce(arr,0,size,sum);
    
}
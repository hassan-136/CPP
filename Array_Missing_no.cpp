#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int arr_size=num-1;
    int arr[100];
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }
int sum=0;
for(int i=0;i<=num;i++)
  {
    sum+=i;
  }  
  for(int i=0;i<arr_size;i++)
  {
    sum-=arr[i];
  }
  cout<<sum;
}
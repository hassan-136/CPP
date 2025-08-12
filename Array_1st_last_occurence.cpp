#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter number:";
    cin>>num;
    int arr[1000];
    for(int i=0;i<num;i++)
{
    cin>>arr[i];

}
int target;
cout<<"Enter target:";
cin>>target;
int first=-1;
int last =-1;
int start=0;
int end = num-1;
while(start<=end){
    int mid=start+(end-start)/2;
if(arr[mid]==target){
    first=mid;
    end=mid-1;

}
else if(arr[mid]<target){
    start=mid+1;
}
else{
    end=mid-1;
}

}
start=0;
end=num-1;

while(start<=end){
    int mid =start+(end-start)/2;
    if(arr[mid]==target){
        last=mid;
        start=mid+1;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }
    else{
        end=mid-1;
    }

}
cout<<"First Occurence:"<<first<<endl;  
cout<<"Last Occurence:"<<last<<endl;
}
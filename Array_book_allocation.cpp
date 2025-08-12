#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    int arrr[1000];
    for(int i=0;i<num;i++){
        cin>>arrr[i];
    }
    int m;
    cout<<"Enter students:";
    cin>>m;
    int ans = 0;
    int end=0;
    for(int i=0;i<num;i++){
        end+=arrr[i];
    }
    int start=INT16_MIN;
    for(int i=0;i<num;i++){
        if(arrr[i]>start){
            start= max (arrr[i], start);
        }
    }
    while(start<=end){
        int page=0 ; int count=1;
        int mid = start+(end-start)/2;
        for(int i=0;i<num;i++){
            page+=arrr[i];
            if(page>mid){
                count++;
                page=arrr[i];
            }
        }
        if(count<=m){
            ans = mid;
            end = mid - 1; // Move left to find a smaller maximum page count
        }
        else{
            start = mid + 1; // Move right to find a larger maximum page count
        }
    }
    cout<<"The minimum number of pages required is: "<<start<<endl;
}
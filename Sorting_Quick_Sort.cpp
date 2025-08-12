#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pos = start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quick_Sort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivot = partition(arr,start,end);
    quick_Sort(arr,start,pivot-1); //Left side
    quick_Sort(arr,pivot+1,end);   //right side
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int * arr = new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    quick_Sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// #include<iostream>
// using namespace std;
// int partition(int arr[],int start,int end){
//     int pos =start;
//     for(int i=0;i<end;i++){
//         if(arr[i]<=arr[end]){
//             swap(arr[i],arr[pos]);
//             pos++;
//         }
//     }
//     return pos-1;
// }

// void quick(int arr[],int start,int end){
//     if(start==end){
//         return;
//     }

//     int pivot= partition(arr,start,end);
//     quick(arr,start,pivot-1);
//     quick(arr,pivot+1,end);
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr[],int start , int mid ,int end){
//     int left =start ;
//     int right =mid+1;
//     int index =0;
//     vector<int> temp (end-start+1);
//     while(left<=mid && right<=end){
//         if(arr[left]<arr[right]){
//             temp[index]=arr[left];
//             index++; left++;
//         }
//         else{
//             temp[index]=arr[right];
//             index++;right++;
//         }
//     }
//         while(left<=mid){
//             temp[index]=arr[left];
//             index++;left++;
//         }
//         while(right<=end){
//             temp[index]=arr[right];
//             index++;right++;
//         }
//         index=0;
//         while(start<=end){
//             arr[start]=temp[index];
//             index++;start++;
//         }
    
// }

// void merge_sort(int arr[],int start,int end){
//     if(start==end)
//     return;

//     int mid = start+(end-start)/2;
//     merge_sort(arr,start,mid);
//     merge_sort(arr,mid+1,end);
//     merge(arr,start,mid,end);
// }

// int main(){
//     int size;
//     cout<<"Enter size:";
//     cin>>size;
//     int * arr = new int{size};
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     merge_sort(arr,0,size-1);
//     cout<<"After merge_Sort:";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int left = start;
    vector<int> temp(end-start+1);
    int right= mid+1;
    int index =0;
    while(left<=mid && right<= end){
        if(arr[left]<arr[right]){
            temp[index]=arr[left];
            index++;left++;
        }
        else{
            temp[index]=arr[right];
            index++;right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++;left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++;right++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
}

void merge_sort(int arr[],int start,int end){
    if(start==end){
        return;
    }
int mid = start+ (end-start)/2;

    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int size;
    cout<<"enter size:";
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
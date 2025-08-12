#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    vector<int> temp(end-start+1);
    int left = start;
    int right= mid+1;
    int index =0;
    while(left<=mid && right<=end){
        if(arr[left]<arr[right]){
            temp[index]=arr[left];
            index++; left++;
        }
        else{
            temp[index]=arr[right];
            index++; right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];

        index++;
        left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++ ;
        right++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
}
void merge_sort(int arr[],int start ,int end){
    if(start==end){
        return;
    }
    int mid = start+(end-start)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    int * arr= new int [size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// #include<iostream>
// #include<vector>
// #include<chrono>  // for high_resolution_clock
// using namespace std;
// using namespace chrono; // chrono for time measurement

// void merge(int arr[], int start, int mid, int end) {
//     vector<int> temp(end - start + 1);
//     int left = start;
//     int right = mid + 1;
//     int index = 0;

//     while (left <= mid && right <= end) {
//         if (arr[left] < arr[right]) {
//             temp[index++] = arr[left++];
//         } else {
//             temp[index++] = arr[right++];
//         }
//     }

//     while (left <= mid) temp[index++] = arr[left++];
//     while (right <= end) temp[index++] = arr[right++];

//     index = 0;
//     while (start <= end) arr[start++] = temp[index++];
// }

// void merge_sort(int arr[], int start, int end) {
//     if (start >= end) return;
//     int mid = start + (end - start) / 2;
//     merge_sort(arr, start, mid);
//     merge_sort(arr, mid + 1, end);
//     merge(arr, start, mid, end);
// }

// int main() {
//     int size;
//     cout << "Enter size: ";
//     cin >> size;
//     int* arr = new int[size];

//     cout << "Enter " << size << " elements:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // ⏱️ Start measuring time
//     auto startTime = high_resolution_clock::now();

//     merge_sort(arr, 0, size - 1);

//     // ⏱️ Stop measuring time
//     auto endTime = high_resolution_clock::now();

//     // 🕒 Calculate duration
//     auto duration = duration_cast<microseconds>(endTime - startTime);
//     cout << "\nSorted array:\n";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << "\n\nTime taken by Merge Sort: " << duration.count() << " microseconds\n";

//     delete[] arr;
//     return 0;
// }

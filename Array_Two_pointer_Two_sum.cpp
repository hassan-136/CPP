// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter num:";
//     cin>>num;
//     int arr[1000];
//     for(int i=0;i<num;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter target:";
//     cin>>target;
//    int start=0;
//     int end =num-1;
//  while(start<end){
//     if(arr[start]+arr[end]==target){
//         cout<<arr[start]<<" "<<arr[end]<<endl;
//         break;
//     }
//     else if (arr[start]+arr[end]<target){
//         start++;
//     }
//     else {
//         end--;
//     }
//  }
// }


#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    vector<int> arr(num); // Dynamic array (safer than fixed-size)
    cout << "Enter " << num << " elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    // Sort the array (MUST for two-pointer to work)
    sort(arr.begin(), arr.end());

    int start = 0, end = num - 1;
    bool found = false;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == target) {
            cout << "Pair found: " << arr[start] << " and " << arr[end] << endl;
            found = true;
            start++; // Continue searching for other pairs
        }
        else if (sum < target) {
            start++; // Need a larger sum
        }
        else {
            end--; // Need a smaller sum
        }
    }

    if (!found) {
        cout << "No pair sums to " << target << endl;
    }

    return 0;
}
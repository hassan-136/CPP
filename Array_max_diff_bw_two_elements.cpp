// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int maximumdiffrencebetweentwoelements(int arr[],int n){
//     int suffix[n];
//     suffix[n-1] = arr[n-1];
//     for(int i=n-2;i>=0;i--){
//          suffix[i] = max(suffix[i+1],arr[i]);
//     }
//     int ans = INT_MIN;
//     for(int i=0;i<n;i++){
//         ans = max(ans,suffix[i+1]-arr[i]);
//     }
//     return ans;
// }
// int main(){
// int n;
// cout<<"Enter n ";
// cin>>n;
// int arr[1000];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<maximumdiffrencebetweentwoelements(arr,n);    
// }

#include <iostream>
#include <climits>
using namespace std;

int maximumDifference(int arr[], int n) {
    int min_element = arr[0];
    int max_diff = INT_MIN;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] - min_element > max_diff) {
            max_diff = arr[i] - min_element;
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }
    return max_diff;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << maximumDifference(arr, n);
    return 0;
}
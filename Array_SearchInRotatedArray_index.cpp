#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int arr[1000];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int start = 0, end = num - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            break;
        }

        // Check if left half is sorted
        if (arr[start] <= arr[mid]) {
            if (key >= arr[start] && key < arr[mid]) {
                end = mid - 1;  // key lies in left half
            } else {
                start = mid + 1; // key lies in right half
            }
        }
        // Right half is sorted
        else {
            if (key > arr[mid] && key <= arr[end]) {
                start = mid + 1; // key lies in right half
            } else {
                end = mid - 1;   // key lies in left half
            }
        }
    }

    cout << ans << endl;
}

#include <iostream>
#include <vector>
using namespace std;

int ways(int arr[], int m, int sum) {
    if (sum == 0) return 1;  // Valid way found
    if (sum < 0) return 0;   // Invalid path

    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans += ways(arr, m, sum - arr[i]);
    }
    return ans;
}

int main() {
    int m;
    cout << "Enter size: ";
    cin >> m;

    int *arr = new int[m];
    cout << "Enter coins: ";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter sum: ";
    cin >> sum;

    cout << "Number of ways: " << ways(arr, m, sum);

    delete[] arr;  // Free memory
    return 0;
}
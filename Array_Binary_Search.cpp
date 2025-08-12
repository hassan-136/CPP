#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;
    
    // Input validation
    if (num <= 0 || num > 1000) {
        cout << "Invalid input size. Must be between 1 and 1000." << endl;
        return 1;
    }

    int arr[1000]; 
    cout << "Enter " << num << " sorted elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    int end = 0;
    int start = num - 1; // descending order, so start from the last index
    //nhi to end or start ko interchange kar d00000oo
    bool found = false;

    while (end <= start) {
       
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
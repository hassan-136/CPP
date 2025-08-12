#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int arr[3] = {10,10,5};
    int max = INT_MIN;
    int second = INT_MIN;
    
    // Find the maximum element
    for(int i = 0; i < 3; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Find the second maximum element
    for(int i = 0; i < 3 ; i++) {
        if(arr[i] > second && arr[i] < max) {
            second = arr[i];
        }
    }
    
    cout << "Second maximum element is: " << second << endl;
    return 0;
}
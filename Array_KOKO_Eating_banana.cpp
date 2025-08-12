#include <iostream>
#include <cmath> // For ceil() function

using namespace std;

int findMax(int piles[], int n) {
    int maxPile = piles[0];
    for (int i = 1; i < n; i++) {
        if (piles[i] > maxPile) {
            maxPile = piles[i];
        }
    }
    return maxPile;
}

int minEatingSpeed(int piles[], int n, int h) {
    int left = 1;
    int right = findMax(piles, n);
    int result = right; // Initialize with max possible speed
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long hoursNeeded = 0;
        
        for (int i = 0; i < n; i++) {
            hoursNeeded += ceil((double)piles[i] / mid);
        }
        
        if (hoursNeeded <= h) {
            result = mid; // Update result to a smaller possible k
            right = mid - 1; // Try a slower speed
        } else {
            left = mid + 1; // Need a faster speed
        }
    }
    
    return result;
}

int main() {
    int piles[] = {3, 6, 7, 11};
    int n = sizeof(piles) / sizeof(piles[0]);
    int h = 8;
    
    int k = minEatingSpeed(piles, n, h);
    cout << "Minimum eating speed: " << k << endl; // Output: 4
    
    return 0;
}
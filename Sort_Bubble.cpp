#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter size: ";
    cin >> num;
    int arr[1000];
    
    cout << "Enter elements: ";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    // Bubble Sort with round printing
    for(int i = 0; i < num - 1; i++){
        cout << "Round " << (i + 1) << ": ";
        
        bool swapped = false;
        for(int j = 0; j < num - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // Print array after this round
        for(int k = 0; k < num; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
        
        // If no swaps occurred, array is sorted
        if(!swapped){
            cout << "Array is now sorted!" << endl;
            break;
        }
    }
    
    cout << "\nFinal sorted array: ";
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
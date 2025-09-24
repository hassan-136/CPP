#include <iostream>
#include <vector>
using namespace std;

// ListNode class
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int value) {
        val=value;
        next = NULL;    
    }
};
vector<vector<int> > spiralMatrix(int m, int n, ListNode* head) {
    vector<vector<int> > matrix(m, vector<int>(n, -1));
    
    if (!head) return matrix;
    
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    ListNode* current = head;
    
    while (top <= bottom && left <= right) {
        // Left to right
        for (int i = left; i <= right && current; i++) {
            matrix[top][i] = current->val;
            current = current->next;
        }
        top++;
        
        // Top to bottom
        for (int i = top; i <= bottom && current; i++) {
            matrix[i][right] = current->val;
            current = current->next;
        }
        right--;
        
        // Right to left
        if (top <= bottom) {
            for (int i = right; i >= left && current; i--) {
                matrix[bottom][i] = current->val;
                current = current->next;
            }
            bottom--;
        }
        
        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top && current; i--) {
                matrix[i][left] = current->val;
                current = current->next;
            }
            left++;
        }
    }
    
    return matrix;
}

// Function to print matrix
void printMatrix(vector<vector<int> > matrix) {
    cout << "\nSpiral Matrix:\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int m, n, numElements;
    
    // Get matrix dimensions from user
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;
    
    // Get number of elements for linked list
    cout << "Enter number of elements for linked list: ";
    cin >> numElements;
    
    // Create linked list based on user input
    ListNode* head = nullptr;
    ListNode* current = nullptr;
    
    if (numElements > 0) {
        cout << "Enter " << numElements << " elements:\n";
        for (int i = 0; i < numElements; i++) {
            int value;
            cout << "Element " << i + 1 << ": ";
            cin >> value;
            
            if (!head) {
                head = new ListNode(value);
                current = head;
            } else {
                current->next = new ListNode(value);
                current = current->next;
            }
        }
    }
    
    // Create spiral matrix
    vector<vector<int> > result = spiralMatrix(m, n, head);
    
    // Print the result
    printMatrix(result);
    
    // Clean up memory
    current = head;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    
    return 0;
}
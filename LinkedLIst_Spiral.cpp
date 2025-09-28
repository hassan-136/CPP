#include <iostream>
#include <vector>
using namespace std;


struct Node {
    int val;
    Node* next;
    Node(int value) {
        val=value;
        next = NULL;    
    }
};
vector<vector<int> > spiralMatrix(int m, int n, Node* head) {
    vector<vector<int> > matrix(m, vector<int>(n, -1));
    
    if (!head) return matrix;
    
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    Node* current = head;
    
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
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    cout << "Enter number of elements for linked list: ";
    cin >> numElements;
    Node* head = nullptr;
    Node* current = nullptr;
    
    if (numElements > 0) {
        cout << "Enter " << numElements << " elements:\n";
        for (int i = 0; i < numElements; i++) {
            int value;
            cout << "Element " << i + 1 << ": ";
            cin >> value;
            
            if (!head) {
                head = new Node(value);
                current = head;
            } else {
                current->next = new Node(value);
                current = current->next;
            }
        }
    }
  
    vector<vector<int> > result = spiralMatrix(m, n, head);

    printMatrix(result);
}
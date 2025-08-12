#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        if (n == 0) return -1;
        
        stack<int> st;
        // Push all people onto the stack
        for (int i = 0; i < n; i++) {
            st.push(i);
        }
        
        // Narrow down to potential celebrity
        while (st.size() > 1) {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            
            if (mat[first][second]) {
                // first knows second -> first can't be celebrity
                st.push(second);
            } else {
                // first doesn't know second -> second can't be celebrity
                st.push(first);
            }
        }
        
        if (st.empty()) {
            return -1;
        }
        
        int potential = st.top();
        
        // Verify the potential celebrity
        for (int i = 0; i < n; i++) {
            if (i != potential) {
                // Everyone must know the celebrity
                // Celebrity must know nobody
                if (!mat[i][potential] || mat[potential][i]) {
                    return -1;
                }
            }
        }
        
        return potential;
    }
};
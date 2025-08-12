#include <iostream>
#include <vector>
using namespace std;

void find(int n, vector<string>& ans, string& temp, int one, int zero) {
    if (temp.size() == n) {
        ans.push_back(temp);
        cout << temp << endl;
        return;
    }
    
    // Always allow adding '1'
    temp.push_back('1');
    find(n, ans, temp, one + 1, zero);
    temp.pop_back();
    
    // Only allow adding '0' if:
    // 1. We haven't added any '0' yet (zero < 1) AND
    // 2. The string is not empty (to prevent starting with '0')
    if (zero < 1 && !temp.empty()) {
        temp.push_back('0');
        find(n, ans, temp, one, zero + 1);
        temp.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    vector<string> ans;
    string temp = "";
    find(n, ans, temp, 0, 0);
    
    return 0;
}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    cout << "Enter string: ";
    string s;
    cin >> s;

    int first = 0, second = 0, len = INT_MAX;

    vector<int> total(256, 0);
    int distinct = 0;

    for (char c : s) {
        if (total[c] == 0) {
            distinct++;
            total[c] = 1;
        }
    }

    // Prepare for window
    vector<int> count(256, 0);
    int formed = 0;

    while (second < s.size()) {
        count[s[second]]++;
        if (count[s[second]] == 1) {
            formed++;
        }

        while (formed == distinct) {
            // Update minimum length
            len = min(len, second - first + 1);

            // Shrink window
            count[s[first]]--;
            if (count[s[first]] == 0) {
                formed--;
            }
            first++;
        }

        second++;
    }

    cout << "Smallest distinct window length: " << len << endl;
    return 0;
}

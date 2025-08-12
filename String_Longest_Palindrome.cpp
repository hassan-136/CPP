#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    vector<int> lower(26, 0), upper(26, 0);
    int count = 0;
    bool odd = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a') {
            lower[s[i] - 'a']++;
        } else {
            upper[s[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (lower[i] % 2 == 0) {
            count += lower[i];
        } else {
            count += lower[i] - 1;
            odd = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (upper[i] % 2 == 0) {
            count += upper[i];
        } else {
            count += upper[i] - 1;
            odd = true;
        }
    }

    if (odd)
        count += 1;

    cout << "Longest Palindrome Length: " << count << endl;
    return 0;
}

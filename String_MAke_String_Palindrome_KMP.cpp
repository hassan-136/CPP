// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     cout<<"Enter string:";
//     string s;
    
//     cin>>s;
//     string  original=s;
//     reverse(s.begin(),s.end());
//     string ans=original+'%'+s;
//     vector<int> lps(ans.size(),0);
// int first =0;
// int second=1;
// while(second<ans.size()){
//     if(ans[first]==ans[second]){
//         lps[second]=first+1;
//         first++;
//         second++;
//     }
//     else{
//         if(first==0){
//             lps[second]=0;
//             second++;
//         }
//         else{
//             first=lps[first-1];
//         }
//     }
// }

// cout<<"Charcters nneeded to make it palindrome are:"<< original.size()-lps[ans.size()-1];

// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    cout << "Enter string: ";
    string s;
    cin >> s;

    string original = s;
    string rev = s;
    reverse(rev.begin(), rev.end());

    // Form the combined string for LPS computation
    string combined = original + '%' + rev;

    // Compute LPS array
    vector<int> lps(combined.size(), 0);
    int first = 0, second = 1;

    while (second < combined.size()) {
        if (combined[first] == combined[second]) {
            first++;
            lps[second] = first;
            second++;
        } else {
            if (first != 0) {
                first = lps[first - 1];
            } else {
                lps[second] = 0;
                second++;
            }
        }
    }

    int toAdd = original.size() - lps.back();
    cout << "Characters needed to make it palindrome: " << toAdd << endl;

    // Add the required characters in front
    string addInFront = rev.substr(0, toAdd);
    string finalPalindrome = addInFront + original;

    cout << "Final palindrome string: " << finalPalindrome << endl;
}

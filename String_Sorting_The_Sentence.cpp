// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter the String:";
//     getline(cin,s);

//     vector<string> ans(10);
//     string temp="";
//     int count=0;
//     int index=0;

//     while(index<s.size()){
//         if(s[index]==' '){
//         int pos = temp [temp.size()-1]-'0';
//         temp.pop_back();
//         ans[pos]=temp;
//         temp.clear();
//         count++;
//     }
//     else{
//         temp+=s[index];
//         index++;
//     }
//     }
//       int pos = temp [temp.size()-1]-'0';
//         temp.pop_back();
//         ans[pos]=temp;
//         temp.clear();
//         count++;
        
//         for(int i=1;i<=count;i++){
//             temp=ans[i];
//             temp+=" ";
//         }
//         temp.pop_back();
//         cout<<temp;
//         return 0;
// }

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string s;
    cout << "Enter the String: ";
    getline(cin, s); // take entire line input

    vector<string> ans(10); // to store words at positions 1-9
    string temp = "";
    int count = 0;
    int index = 0;

    // Step 1: Traverse the string
    while(index < s.size()) {
        if(s[index] == ' ') {
            // process the word
            int pos = temp[temp.size() - 1] - '0'; // get last char as position
            temp.pop_back(); // remove that digit from word
            ans[pos] = temp; // store in that position
            temp.clear();
            count++;
            index++; // move past the space
        } else {
            temp += s[index]; // build the word
            index++;
        }
    }

    // process the last word (no space after it)
    if (!temp.empty()) {
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;
    }

    // Step 2: Join sorted words
    string result = "";
    for(int i = 1; i <= 9; i++) {
        if(ans[i] != "") {
            result += ans[i] + " ";
        }
    }

    // remove last space
    if (!result.empty()) {
        result.pop_back();
    }

    cout << result;
    return 0;
}

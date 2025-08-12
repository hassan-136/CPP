#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string num1 , num2, ans;
    cout<<"Enter string 1 in num form:";
    cin>>num1;
    cout<<"Enter string 2 in num form :";
    cin>>num2;
    int carry=0;
    int sum ;
    int index1 = num1.size()-1;
    int index2 = num2.size()-1;
    while(index2>=0){
        sum=(num1[index1]-'0')+ (num2[index2]-'0')+carry;
        carry= sum/10;
        char c = sum%10 +'0';
        ans+=c; 
        index2--;
        index1--;
    }

    while(index1>=0){
        sum= num1[index1]-'0'+carry;
        carry= sum/10;
        char c = sum%10 +'0';
        ans+=c;
        index1--;
    }
    if(carry){
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    cout<<"sum is:"<<ans;
}

// #include <iostream>
// #include <algorithm>  // For reverse()
// using namespace std;

// int main() {
//     string num1, num2, ans;
//     cout << "Enter string 1 in num form: ";
//     cin >> num1;
//     cout << "Enter string 2 in num form: ";
//     cin >> num2;

//     int carry = 0;
//     int index1 = num1.size() - 1;
//     int index2 = num2.size() - 1;

//     while (index1 >= 0 || index2 >= 0 || carry > 0) {
//         int digit1 = (index1 >= 0) ? (num1[index1--] - '0') : 0;
//         int digit2 = (index2 >= 0) ? (num2[index2--] - '0') : 0;
//         int sum = digit1 + digit2 + carry;
//         carry = sum / 10;
//         ans += (sum % 10) + '0';
//     }

//     reverse(ans.begin(), ans.end());  // Fix: Reverse the result
//     cout << "Sum is: " << ans << endl;

//     return 0;
// }
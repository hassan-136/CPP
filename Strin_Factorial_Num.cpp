// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;

//     vector<int> ans(1, 1); 

//     for (int n = 2; n <= num; n++) {
//         int carry = 0;
//         for (int i = 0; i < ans.size(); i++) {
//             int result = ans[i] * n + carry;
//             ans[i] = result % 10;
//             carry = result / 10;
//         }

//         while (carry > 0) {
//             ans.push_back(carry % 10);
//             carry /= 10;
//         }
//     }

//     cout << "Factorial: ";
//     for (int i = ans.size() - 1; i >= 0; i--) {
//         cout << ans[i];
//     }
//     cout << endl;

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cout<<"Enter num:";

    cin>>num;
    vector<int> ans(1,1);
    for(int i=2;i<=num;i++){
        int carry=0;
        for(int j=0;j<ans.size();j++){
            int result=ans[j]*i+carry;
            ans[j]=result%10;
            carry=result/10;
        }
        while(carry>0){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    cout<<"Enter String:";
    string s;
    string ans;
    getline(cin,s);
    vector<int> alpha(26,0);
    for(int i=0;i<s.size();i++){
        int index = s[i]-'a';
        alpha[index]++;
    }
    for(int i=0;i<26;i++){
        char c= 'a'+i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }
    }
    cout<<ans;
}
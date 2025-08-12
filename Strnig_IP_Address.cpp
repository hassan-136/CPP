#include<iostream>
using namespace std;
int main(){
    cout<<"Enter String";
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
         ans+="[.]";
        }
        else{
            ans+=s[i];
        }
    }
        cout<<ans;
}
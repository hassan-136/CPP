#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    vector<int> alphabets(26,0);
    for(int i=0;i<s.size();i++){
        // if(s[i]>='a' && s[i]<='z'){
        //     alphabets[s[i]-'a']++;
        // }
        // else if(s[i]>='A' && s[i]<='Z'){
        //     alphabets[s[i]-'A']++;
        // }

        int index = s[i]-'a';
        alphabets[index]=1;
    }
    for(int i=0;i<26;i++){
        if(alphabets[i]==0){
            cout<<"Not pangram";
            break;
        }
        else{
            cout<<"Pangram";
            break;
        }
    }
}
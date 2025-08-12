#include<iostream>
#include<string>
using namespace std;
int count(string s, int start){
    if(start>s.size()-1){
        return 0;
    }
    if(s[start]=='a'|| s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u' || s[start]=='A' || s[start]=='E' || s[start]=='I' || s[start]=='O' || s[start]=='U' ){
        return 1+count(s, start+1);
    }
    else{
        return count(s, start+1);
    }
}
int main(){
    string s;
    cout<<"Enter string";
   getline(cin,s);
    cout<<count(s,0);
}
#include<iostream>
#include<string>
using namespace std;
void reverse (string &s, int i, int j){
    if(i>j){
        cout<<s;
        return ;
    }
    swap(s[i],s[j]);
    
    reverse(s,i+1,j-1);
  
}
int main(){
    cout<<"Enter string:";
    string s;
    getline(cin,s);
    reverse(s,0,s.size()-1);
    
}
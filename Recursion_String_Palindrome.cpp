#include<iostream>
using namespace std;
bool check(string s, int start, int end){
 
    if(start>=end){
       return 1;
    }
    if(s[start]!=s[end]){
        return 0;
    }
 
    return check(s, start++,end--);
}
int main(){
    cout<<"Enter string:";
    string s;
    cin>>s;
   if(check(s,0,s.size()-1)){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
}
#include<vector>
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    int pre =0;
    int suff=1;
    vector<int> lps(s.size(),0);
    while(suff<s.size()){
        if(s[pre]==s[suff]){
            lps[suff]= pre+1;
            pre++;
            suff++;
        }
        else{
            if(pre==0){
                lps[suff]=0;
                suff++;
            }
            else{
                pre = lps[pre-1];    
            }
        }
    }
    cout<<"Answer according to KMP Algorithm is: "<<lps.back();
}
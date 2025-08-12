#include<iostream>
#include<vector>
using namespace std;

void findlps(vector <int> &lps, string s){
       int pre =0;
    int suff=1;
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
}

int main(){
    cout<<"Enter haystack:";
    string haystack;
    cin>>haystack;
    cout<<"Enter needle:";
    string needle;
    cin>>needle;
vector <int> lps(needle.size(),0);
findlps(lps,needle);
int first =0 , second=0;
while(second<needle.size() && first < haystack.size()){

    if(needle[second]==haystack[first]){
        second++;
        first++;

    }
    else{
        if(second==0)
        first++;
        else{
            second = lps [second-1];
        }
    }

}
if(second== needle.size()){
    cout<<"Found";
}
else{
    cout<<"Not found";
}

}
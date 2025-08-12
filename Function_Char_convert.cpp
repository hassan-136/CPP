#include<iostream>
using namespace std;

char convert(char c){
    char ans=c-'a'+'A';
    return ans;
}
int main(){
    cout<<"Enter character:";
    char c;
    cin>>c;
   cout<< convert(c);
}
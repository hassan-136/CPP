#include<iostream>
using namespace std;

int Fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans =ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    int ans= Fact(a)/(Fact(b)*Fact(a-b));
    cout<<ans;
}
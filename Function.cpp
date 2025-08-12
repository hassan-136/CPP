#include<iostream>
using namespace std;

bool Prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int fact(int n){
    if(n<0){
        return 0; // Factorial is not defined for negative numbers
    }
    int ans=1;
    for(int i=1;i<=n;i++)
        ans=ans*i;
    return ans;
    
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
   cout<< Prime(a);
   cout<< Prime(b-a);
   cout<< fact(a);
   cout<< fact(b);
}
#include<iostream>
#include<cmath>
using namespace std;
int digit_count(int n){
    int count=0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}

int Armstrong(int num,int digits){
    int  sum=0, rem;
    int n=num;
    while(n){
        rem=n%10;
        n=n/10;
        sum+=round(pow(rem,digits));
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int digits=digit_count(num);
    cout<<Armstrong(num,digits);
}
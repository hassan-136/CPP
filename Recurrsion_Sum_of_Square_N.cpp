#include<iostream>
using namespace std;
int sum(int num){
    if (num==1)
    return 1;

    return num*num+sum(num-1);
}
int main(){
    int num;
    cout<<"Enter num:";
    cin>>num;
    cout<<sum(num);
}
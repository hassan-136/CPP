#include<iostream>
using namespace std;
int trailing(int num){
    int count=0;
    while(num>=5){
        num/=5;
        count+=num;

    }return count;
    
}
int main(){
    cout<<"Enter a number:";
    int num;
    cin>>num;
cout<<trailing(num);
    return 0;
}
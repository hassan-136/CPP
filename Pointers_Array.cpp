#include<iostream>
using namespace std;
int main(){
    // int arr[4]={1,2,3,4};
    // cout<<arr<<endl;
    //    cout<<arr+2<<endl;
    //    cout<<*(arr+2)<<endl;
    //    for(int i=0;i<4;i++){
    //     cout<<*(arr+i)<<" "<<endl;
    //     cout<<(arr+i)<<" "<<endl;
    //    }
    char arr[3]={'a','b'};
    char * ptr = arr;
    cout<<arr;
    cout<<ptr;
    cout<<endl;
    cout<<(void*)ptr;
    char name='k';
    cout<<(void*)&name;
    cout<<endl;
    cout<<sizeof(void*);
}
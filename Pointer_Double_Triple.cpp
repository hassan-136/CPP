#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n=10;
    int * p1 =&n;
    int **p2 =&p1;
    int ***p3 = &p2;
    cout<<***p3+5;
}
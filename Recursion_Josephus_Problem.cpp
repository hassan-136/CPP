// #include<iostream>
// #include<vector>
// using namespace std;
// int winner(vector<bool> &person,int n ,int k , int index,int person_left){
//     if(person_left==1){
//         for(int i=0;i<n;i++){
//             if(person[i]==0){
//                 return i;
//             }
//         }
//     }
//     //kill position
//     int kill =(k-1)%person_left;
//     while(kill--){
//         index = (index+1)%n;
//         while(person[index]==1){
//             index   = (index+1)%n;
//         }
//     }
//     person[index]=1;
//     //Next ALive

//     while(person[index]==1){
//         index   = (index+1)%n;
//     }
//   return  winner(person,n,k,index,person_left-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of person:"; cin>>n;
//     int k;
//     cout<<"Enter the value of k:"; cin>>k;
//     vector<bool> person(n,0);
//     int index=0;
//     cout<<winner(person,n,k,index,n);
// }

#include<iostream>
#include<vector>
using namespace std;
int winner (vector<bool> &person, int n ,int k ,int index ,int person_left){
    if(person_left==1){
        for(int i=0;i<n;i++){
            if(person[i]==0)
            return i;
        }
    }
    //kill position
    int kill = (k-1)%person_left;
    while(kill--){
       index = (index+1)%n;
       while(person[index]==1){
        index =(index+1)%n;
       }
    }
    person[index]=1;
    //next
    while(person[index]==1){
        index = (index+1)%n;
    }
    return winner(person,n,k,index,person_left-1);
}

int main(){
    int n;
    cout<<"Enter the number of person:"; cin>>n;
    int k;
    cout<<"Enter the value of k:"; cin>>k;
    vector<bool> person(n,0);
    int index=0;
    cout<<winner(person,n,k,index,n);
}
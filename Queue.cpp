#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(2);
    q.push(19);
    q.push(11);
     cout<<q.size()<<endl;
     cout<<q.empty()<<endl;
     
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
   

}
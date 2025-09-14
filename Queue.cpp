#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(2);
    q.push(19);
    q.push(11);
  int n = q.size();
  while(n--){
    cout<<q.front()<<" ";
   q.push(q.front());
   q.pop();
  }

}
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v = {4 , 3 , 89 , 21 ,20};
  sort(v.begin(), v.end());

  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
cout<<endl;
  sort (v.begin(), v.end(),greater<int>());
  
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<binary_search(v.begin(),v.end(),222);
  cout<<endl;
  cout<<find(v.begin(),v.end(),21)-v.begin() << endl; // Returns the index of 21 in the vector
}


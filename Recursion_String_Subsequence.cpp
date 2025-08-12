#include<iostream>
#include<vector>
using namespace std;

void subsequence(string arr[], int index,int n,vector<vector<string> > &ans, vector<string> temp){
    if (index==n){
        ans.push_back(temp);
        return ;
    }
    // no
    subsequence(arr,index+1,n,ans,temp);
    //Yes
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,ans,temp);
}
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    string * arr = new string [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector <string> > ans;
    vector <string > temp;
    subsequence(arr,0,n,ans,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
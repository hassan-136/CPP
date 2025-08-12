#include<iostream>
#include<vector>
using namespace std;
void permute(vector<int> & arr, vector<vector <int > > &ans ,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    vector<bool> use(21,0);
    for(int i=index;i<arr.size();i++){
        if(use[arr[i]+10]==0){
        swap(arr[i],arr[index]);
        permute(arr,ans,index+1);
      
        use[arr[i]+10]=1;
    }
}
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;  
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    vector<vector <int > > ans;
    permute(arr,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
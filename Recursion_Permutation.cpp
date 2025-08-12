// #include<iostream>
// #include<vector>
// using namespace std;

// void permute(int arr[], vector<vector<int>>& ans, vector<int>& temp, vector<bool>& visited) {
//     if(temp.size() == visited.size()) {
//         ans.push_back(temp);
//         return;
//     }

//     for(int i=0; i<visited.size(); i++) {
//         if(visited[i] == 0) {
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permute(arr, ans, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }

// int main() {
//     int size;
//     cout << "Enter size:";
//     cin >> size;
    
//     int* arr = new int[size];
//     cout << "Enter elements: ";
//     for(int i=0; i<size; i++) {
//         cin >> arr[i];
//     }

//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(size, 0);
    
//     permute(arr, ans, temp, visited);
    
//     for(int i=0; i<ans.size(); i++) {
//         for(int j=0; j<ans[i].size(); j++) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     delete[] arr;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int> arr, vector<vector <int > > &ans ,int index){

    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        permute(arr,ans,index+1);
        swap(arr[i],arr[index]);    
    }
}

int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    vector<int > arr(size);
    for (int i=0;i<size;i++){
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
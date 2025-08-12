// #include<iostream>
// #include<vector>
// using namespace std;

// bool valid(int i,int j,int n){
//     return (i>=0 && j>=0&& i<n &&j<n);
// }
// int row[]={-1,1,0,0};
// int col[]={0,0,-1,1};
// char dir[]={'U','D','L','R'};
// void total(vector <vector <int> > &matrix,int i ,int j ,int n,string path,vector<string>&ans, vector<vector<bool> > &visited){
//     if(i==n-1 && j==n-1){
//         ans.push_back(path);
//         return;
//     }
//     visited[i][j]=1;
//     for(int k=0;k<n;k++){
//         if(valid(i+row[k],j+col[k],n)&& matrix[i+row[k]][j+col[k]]&&!visited[i+row[k]][j+col[k]]){

//             path.push_back(dir[k]);
//             total(matrix,i+row[k],j+col[k],n,path,ans,visited);
//             path.pop_back();
//         }
//     }
//     visited[i][j]=0;
// }

// int main(){
//     int n;
//     cout<<"Enter size:";
//     cin>>n;
//     cout<<"Enter matrix elements (0 for blocked, 1 for open):"<<endl;
//     vector<vector<int> > matrix(n,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     vector<string> ans;
//     vector<vector<bool> > visited(n,vector<bool>(n,0));
//     string path="";
//     total(matrix,0,0,n,path,ans,visited);
//     for(auto i:ans){
//         cout<<i<<endl;
//     }
// }
#include<iostream>
#include<vector>
using namespace std;

bool valid(int i, int j, int n) {
    return (i >= 0 && j >= 0 && i < n && j < n);
}

int row[] = {-1, 1, 0, 0};
int col[] = {0, 0, -1, 1};
char dir[] = {'U', 'D', 'L', 'R'};

void total(vector<vector<int>> &matrix, int i, int j, int n, string path, vector<string> &ans, vector<vector<bool>> &visited) {
    if (i == n-1 && j == n-1) {
        ans.push_back(path);
        return;
    }
    visited[i][j] = 1;
    for (int k = 0; k < 4; k++) { // Loop over 4 directions, not n
        int new_i = i + row[k];
        int new_j = j + col[k];
        if (valid(new_i, new_j, n) && matrix[new_i][new_j] && !visited[new_i][new_j]) {
            total(matrix, new_i, new_j, n, path + dir[k], ans, visited);
        }
    }
    visited[i][j] = 0;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter matrix elements (0 for blocked, 1 for open):" << endl;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    if (matrix[0][0] == 1) { // Check if starting cell is open
        total(matrix, 0, 0, n, "", ans, visited);
    }
    if (ans.empty()) {
        cout << "No paths found!" << endl;
    } else {
        for (auto path : ans) {
            cout << path << endl;
        }
    }
    return 0;
}
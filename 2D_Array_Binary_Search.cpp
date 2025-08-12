 #include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter rows:";
    cin>>row;
    int col;
    cout<<"Enter columns:";
    cin>>col;
    int arr[100][100];

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cin>>arr[i][j];
        }
        
     }
        int target;
        cout<<"Enter target:";
        cin>>target;
        for(int i=0;i<row;i++){
            if(arr[i][0]<=target && target<= arr[i][col-1]){
                int start=0;
                int end= col-1;
                while(start<=end){
                    int mid = start+ (end-start/2);
                    if(arr[i][mid]==target){
                        cout<<"Yes";
                        break;
                    }
                    else if( arr[i][mid]<target)
                    start++;
                
                else{
                    end--;
                }
            }}

        }
        
    }
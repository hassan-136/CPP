// #include<iostream>
// using namespace std;
// void toh(int n , int source , int help , int destination){
//     if(n==1){
//         cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
//         return ;
//     }
//     toh(n-1,source ,destination,help);
//      cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
//      toh(n-1,help,source,destination);
// }

// int main(){
//     int n;
//     cout<<"Enter number of disks:";
//     cin>>n;
//     toh(n,1,2,3);
// }

#include<iostream>
using namespace std;
void toh(int n , string source , string help , string destination){
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        return ;
    }
    toh(n-1,source ,destination,help);
     cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
     toh(n-1,help,source,destination);
}

int main(){
    int n;
    cout<<"Enter number of disks:";
    cin>>n;
    toh(n,"source","helper","destination");
}
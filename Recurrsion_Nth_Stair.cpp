// #include<iostream>
// using namespace std;
// int stairs(int num){

//     if(num==1||num==0)
//     return 1;
//     if(num==2)
//     return 2;
//     if(num==3)
//     return 3;
//     return stairs(num-1)+stairs(num-2);
// }
// int main(){
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     cout<<"Ways to reach top are:"<<stairs(num);
// }

#include <iostream>
using namespace std;

int stairs(int num) {
    if (num == 0 || num == 1) return 1;
    if (num == 2) return 2;

    int prev2 = 1;  // ways to reach step 0
    int prev1 = 1;  // ways to reach step 1
    int current = 0;

    for (int i = 2; i <= num; i++) {
        current = prev1 + prev2;  // ways to reach current step
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Ways to reach top are: " << stairs(num) << endl;
    return 0;
}


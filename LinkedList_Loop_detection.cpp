// /*
// struct Node
// {
//     int data;
//     struct Node *next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// } */
// class Solution {
//   public:
//     bool check(vector<Node*>&visited, Node*curr){
//             for(int i=0;i<visited.size();i++){
//                 if(visited[i]==curr)
//                 return 1;
//             }
//             return 0;
//     }
//     // Function to check if the linked list has a loop.
//     bool detectLoop(Node* head) {
//         // code here
      
//     Node* curr = head;
//     vector <Node* > visited;
//     while(curr){
//         if(check(visited, curr))
//         return 1;
//         visited.push_back(curr);
//         curr= curr->next;
//     }
//     return 0;
// }
    
// };

Node*fast =head;
Node*slow =head;

while(fast!=NULL && fast->next!=NULL){
    fast = fast->next->next;
    slow = slow->next;
    if(fast==slow){
        cout<<"Loop Detected"<<endl;
        return 0;
    }
}   
cout<<"No Loop Detected"<<endl;
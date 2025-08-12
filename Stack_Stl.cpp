#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int size, element;

    // Ask user for the size of the stack
    cout << "Enter the size of the stack: ";
    cin >> size;

    // Ask user to input each element
    cout << "Enter " << size << " elements for the stack:\n";
    for (int i = 0; i < size; i++) {
        cin >> element;
        s.push(element); // Push the element onto the stack
    }

    // Display the top element
    if (!s.empty()) {
        cout << "Top element: " << s.top() << endl;
    } else {
        cout << "Stack is empty!" << endl;
        return 0;
    }

    // Pop an element and show the new top
    s.pop();
    if (!s.empty()) {
        cout << "Top element after pop: " << s.top() << endl;
    } else {
        cout << "Stack is empty after pop!" << endl;
    }

    // Display the stack size
    cout << "Stack size: " << s.size() << endl;

    return 0;
}
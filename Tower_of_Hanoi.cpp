// #include <iostream>
// #include <stack>
// #include <vector>
// #include <iomanip>
// #include<Windows.h>
// // #include <unistd.h>  // For sleep() on Unix/Linux (use Sleep() on Windows)
// using namespace std;

// int N;

// vector<stack<int>> rods(3);  // 0: A, 1: B, 2: C

// void printRods() {
//     cout << "\nCurrent State:\n";
//     for (int level = N - 1; level >= 0; --level) {
//         for (int r = 0; r < 3; ++r) {
//             if (rods[r].size() > level) {
//                 stack<int> temp = rods[r];
//                 vector<int> rod_disks;
//                 while (!temp.empty()) {
//                     rod_disks.push_back(temp.top());
//                     temp.pop();
//                 }
//                 cout << setw(10) << string(rod_disks[rod_disks.size() - 1 - level], '=') << "|";
//             } else {
//                 cout << setw(10) << "|" ;
//             }
//         }
//         cout << '\n';
//     }
//     cout << setw(10) << "A" << setw(10) << "B" << setw(10) << "C" << "\n\n";
//     Sleep(1000);  // For animation effect (on Windows use Sleep(1000); include <windows.h>)
// }

// void moveDisk(int from, int to) {
//     int disk = rods[from].top();
//     rods[from].pop();
//     rods[to].push(disk);

//     cout << "Move disk " << disk << " from " << char('A' + from)
//          << " to " << char('A' + to) << "\n";
//     printRods();
// }

// void hanoi(int n, int from, int aux, int to) {
//     if (n == 1) {
//         moveDisk(from, to);
//         return;
//     }
//     hanoi(n - 1, from, to, aux);
//     moveDisk(from, to);
//     hanoi(n - 1, aux, from, to);
// }

// int main() {
//     cout << "Enter number of disks: ";
//     cin >> N;

//     for (int i = N; i >= 1; --i) {
//         rods[0].push(i);  // Push disks on rod A
//     }

//     printRods();  // Initial state
//     hanoi(N, 0, 1, 2);  // A → C using B

//     return 0;
// }

#include <iostream>
#include <stack>
#include <vector>
#include <iomanip>
#include <windows.h>
using namespace std;

int N;
vector<stack<int>> rods(3);  // 0: A, 1: B, 2: C

// ANSI escape codes for color
string RED = "\033[31m";
string GREEN = "\033[32m";
string YELLOW = "\033[33m";
string BLUE = "\033[34m";
string CYAN = "\033[36m";
string RESET = "\033[0m";

// Clears the screen
void clearScreen() {
    // Works on ANSI terminals (cmd, PowerShell)
    cout << "\033[2J\033[H";
}

// Sets console to UTF-8 and enables virtual terminal for ANSI colors
void enableANSI() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= 0x0004; // ENABLE_VIRTUAL_TERMINAL_PROCESSING
    SetConsoleMode(hOut, dwMode);
    SetConsoleOutputCP(CP_UTF8); // UTF-8 for proper characters
}

void printRods() {
    cout << CYAN << "\n\tCurrent Tower State:\n\n" << RESET;
    for (int level = N - 1; level >= 0; --level) {
        for (int r = 0; r < 3; ++r) {
            if (rods[r].size() > level) {
                stack<int> temp = rods[r];
                vector<int> rod_disks;
                while (!temp.empty()) {
                    rod_disks.push_back(temp.top());
                    temp.pop();
                }
                int diskSize = rod_disks[rod_disks.size() - 1 - level];
                string color = diskSize % 3 == 0 ? RED : diskSize % 3 == 1 ? GREEN : YELLOW;
                cout << setw(10) << color << string(diskSize, '=') << "|" << RESET;
            } else {
                cout << setw(10) << "|";
            }
        }
        cout << '\n';
    }
    cout << setw(10) << BLUE << "A" << setw(10) << "B" << setw(10) << "C" << RESET << "\n\n";
    Sleep(800);  // Animation delay
}

void moveDisk(int from, int to) {
    int disk = rods[from].top();
    rods[from].pop();
    rods[to].push(disk);

    cout << GREEN << "➤ Move disk " << disk << " from " << char('A' + from)
         << " to " << char('A' + to) << RESET << "\n";
    printRods();
}

void hanoi(int n, int from, int aux, int to) {
    if (n == 1) {
        moveDisk(from, to);
        return;
    }
    hanoi(n - 1, from, to, aux);
    moveDisk(from, to);
    hanoi(n - 1, aux, from, to);
}

int main() {
    enableANSI();

    cout << CYAN << "🌟 Tower of Hanoi Visual Simulation 🌟" << RESET << "\n\n";
    cout << "Enter number of disks: ";
    cin >> N;

    for (int i = N; i >= 1; --i) {
        rods[0].push(i);
    }

    printRods();
    hanoi(N, 0, 1, 2);

    cout << GREEN << "\n🎉 All disks moved successfully!\n" << RESET;

    return 0;
}

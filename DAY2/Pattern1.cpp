#include<bits/stdc++.h>
using namespace std;

void printPattern() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;   // move to next line
    }
}

int main() {
    printPattern();
    return 0;
}
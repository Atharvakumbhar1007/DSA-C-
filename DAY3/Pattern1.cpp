#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i = 1; i <= n; i++){
        cout << i;
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        printPattern(n);
    }
}
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int space = 0;

    // Upper part
    for(int i = 0; i < n; i++){

        // Left stars
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }

        // Spaces
        for(int j = 0; j < space; j++){
            cout << " ";
        }

        // Right stars
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    space = 2 * (n - 1);

    // Lower part
    for(int i = 0; i < n; i++){

        // Left stars
        for(int j = 1; j <= i + 1; j++){
            cout << "*";
        }

        // Spaces
        for(int j = 0; j < space; j++){
            cout << " ";
        }

        // Right stars
        for(int j = 1; j <= i + 1; j++){
            cout << "*";
        }

        space -= 2;
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        print(n);
    }
}
#include <bits/stdc++.h>
using namespace std;

// Function for linear search
int linearSearch(int n, int num, vector<int> &arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, num;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> num;

    int result = linearSearch(n, num, arr);

    if (result != -1) {
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found";
    }

    return 0;
}
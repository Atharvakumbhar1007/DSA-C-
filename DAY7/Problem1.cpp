#include <bits/stdc++.h>
using namespace std;

// Function to check if array is sorted (non-decreasing)
bool isSorted(vector<int> &a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (isSorted(a)) {
        cout << "Array is sorted (non-decreasing order)";
    } else {
        cout << "Array is NOT sorted";
    }

    return 0;
}
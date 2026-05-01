#include <bits/stdc++.h>
using namespace std;

int largestElement(const vector<int>& arr, int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    vector<int> arr = {10, 5, 20, 8};
    int n = arr.size();

    cout << "Largest element: " << largestElement(arr, n);
    return 0;
}

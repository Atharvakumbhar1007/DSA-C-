#include <bits/stdc++.h>
using namespace std;

vector<int> movezeros(vector<int> a, int n) {
    int j = -1;

    // Step 1: find first zero
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // If no zero found
    if (j == -1) return a;

    // Step 2: move non-zero elements forward
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    arr = movezeros(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
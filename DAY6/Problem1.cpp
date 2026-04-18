//Largest Element in an array

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr = {5, 2, 9, 1, 7};
    int n = arr.size();

    cout << "Largest Element: " << largestElement(arr, n);

    return 0;
}
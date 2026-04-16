#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        // Step 1: find minimum element
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        // Swap with first element of unsorted part
        // Example:
        // [5,2,9,1] ? min = 1 ? swap ? [1,2,9,5]
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {5,2,9,1};
    int n = 4;

    selectionSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
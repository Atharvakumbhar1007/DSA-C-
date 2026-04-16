#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;

        // Example:
        // i=1 ? key=2 ? shift 5 ? [2,5,9,1]
        // i=3 ? key=1 ? shift all ? [1,2,5,9]

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {5,2,9,1};
    int n = 4;

    insertionSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
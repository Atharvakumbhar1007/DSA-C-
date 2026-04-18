#include <bits/stdc++.h>
using namespace std;

// Function to find second largest
int secondLargest(vector<int> &a, int n){
    int largest = a[0];
    int slargest = INT_MIN;

    for(int i = 1; i < n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

// Function to find second smallest
int secondSmallest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++){
        if(a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

// Main function returning both
vector<int> getSecondOrderElements(int n, vector<int> a){
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return {slargest, ssmallest};
}

int main(){
    vector<int> arr = {5, 2, 9, 1, 7};
    int n = arr.size();

    vector<int> result = getSecondOrderElements(n, arr);

    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}
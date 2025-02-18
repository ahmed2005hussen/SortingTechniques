
// Sorting Technique
// Author :  ahmed hussein ahmed
// Date :  18/02/2025


#include <bits/stdc++.h>

using namespace std;
// worst Case : O(n^2)
// Best Case : O(n) if it is arranged at all

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int x = arr[i];
        while (j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main(){
    int arr[]={8,5,7,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr,n);
    for(auto i : arr){
        cout<<i<<' ';
    }
}
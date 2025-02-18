// Sorting Technique
// Author :  ahmed hussein ahmed
// Date :  18/02/2025


#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        swap(arr[k], arr[i]);
    }
}

int main() {
    int arr[] = {8, 6, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    for (auto i: arr) {
        cout << i << ' ';
    }
}
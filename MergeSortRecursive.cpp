// Sorting Technique
// Author :  ahmed hussein ahmed
// Date :  20/02/2025


#include <iostream>

using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int i = l, j = mid + 1, k = 0;
    int b[r - l + 1];
    while (i <= mid && j <= r) {
        if (arr[i] < arr[j])b[k++] = arr[i++];
        else b[k++] = arr[j++];
    }
    for (; i <= mid; i++)b[k++] = arr[i];
    for (; j <= r; j++)b[k++] = arr[j];

    for (i = 0; i < r - l + 1; i++) {
        arr[i + l] = b[i];
    }
}

void mergeSort(int arr[], int l, int r) {
    int mid;
    if (r > l) {
        mid = (r + l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {8, 2, 9, 6, 5, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for (auto i: arr) {
        cout << i << ' ';
    }
}
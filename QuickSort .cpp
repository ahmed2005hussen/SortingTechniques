// Sorting Technique
// Author :  ahmed hussein ahmed
// Date :  19/02/2025
#include <iostream>

using namespace std;

int partition(int arr[], int l, int r) {
    int i = l, j = r, pivot = arr[l];
    while (true) {
        while (i < j && arr[i] <= pivot) i++; // i -> pivot < arr[i] ! pivot >= arr[i]
        while (j > l && arr[j] > pivot) j--; // j -> pivot >= arr[j] ! pivot < arr[i]

        if (i >= j)break;

        swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);

    return j;
}


void quicksort(int arr[], int l, int r) {
    int pivot_position;
    if (l < r) {
        pivot_position = partition(arr, l, r);
        quicksort(arr, l, pivot_position - 1);
        quicksort(arr, pivot_position + 1, r);
    }
}


int main() {
    int arr[] = {50, 60, 70, 90, 80, 40, 20, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n-1);

    for (auto i: arr) {
        cout << i << " ";
    }
    cout << endl;


}
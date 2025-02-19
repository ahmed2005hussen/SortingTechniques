#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i = l, j = m + 1, k = 0;
    int size = r - l + 1;
    int* b = new int[size];

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            b[k++] = arr[i++];
        else
            b[k++] = arr[j++];
    }

    while (i <= m) b[k++] = arr[i++];
    while (j <= r) b[k++] = arr[j++];

    for (i = 0; i < size; i++)
        arr[l + i] = b[i];

    delete[] b;
}

void mergeSort(int arr[], int n) {
    // Handle edge cases
    if (n <= 1) return;


    for (int i = 0; i < n - 1; i += 2) {
        merge(arr, i, i, min(i + 1, n - 1));
    }

    for (int size = 2; size < n; size *= 2) {
        for (int left = 0; left < n - 1; left += 2 * size) {
            int mid = left + size - 1;
            int right = min(left + 2 * size - 1, n - 1);

            if (mid < right) {
                merge(arr, left, mid, right);
            }
        }
    }
}

int main() {
    int arr[] = {8, 3, 7, 4, 9, 2, 6, 5, 1, 22, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
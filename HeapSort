#include <iostream>

using namespace std;

void Max_Heapify(int arr[], int i, int n) {
    int l = i * 2;
    int r = i * 2 + 1;
    int largest = i;
    if (l <= n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r <= n && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        Max_Heapify(arr, largest, n);
    }
}

void Build_Max_Heapify(int arr[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        Max_Heapify(arr, i, n);
    }
}

void HeapSort(int arr[], int n) {

    for(int i = n; i >=2 ; i--){
        swap(arr[1],arr[i]);
        Max_Heapify(arr,1,i-1);
    }
}

int main() {
    int arr[] = {0, 4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int n =(sizeof(arr)/sizeof(arr[0]))-1;
    Build_Max_Heapify(arr, n);
    HeapSort(arr,n);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}

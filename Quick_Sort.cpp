#include <bits/stdc++.h>

using namespace std;
#define ahmed_Hussein ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long
// quick sort code :
int partitioning(vector<int> &arr, int i, int j) {
    int pivot = i+rand()%(j-i+1);
    swap(arr[pivot], arr[i]);
    pivot = i;

    while (true) {
        while (arr[pivot] <= arr[j] && pivot != j) {
            j--;
        }
        if (pivot == j) {
            break;
        } else if (arr[pivot] > arr[j]) {
            swap(arr[pivot], arr[j]);
            pivot = j;
        }
        while (arr[pivot] >= arr[i] && pivot != i) {
            i++;
        }
        if (pivot == i) {
            break;
        } else if (arr[pivot] < arr[i]) {
            swap(arr[i], arr[pivot]);
            pivot = i;
        }
    }
    return pivot;
}

void quick_sort(vector<int> &arr, int i, int j) {
    if (i < j) {
        int piv = partitioning(arr, i, j);
        quick_sort(arr, i, piv - 1);
        quick_sort(arr, piv + 1, j);
    }
}

int main() {
    ahmed_Hussein
    vector<int> a{50, 20, 60, 10, 30, 40};
    srand(time(0));
    quick_sort(a, 0, a.size() - 1);
    for(int i = 0 ; i < a.size(); i++){
        cout<< a[i]<< " ";
    }
    return 0;
}


#include <iostream>

using namespace std;

void shell(int a[], int n) {
    for (int gap = n / 2; gap >= 1; gap /= 2) {
        for (int j = gap; j < n; j++) {
            int i = j - gap;
            int temp = a[j];
            while (i >= 0 && a[i] > temp) {
                a[i + gap] = a[i];
                i = i - gap;
            }
            a[i + gap] = temp;
        }
    }
}

int main() {

    int a[] = {9, 5, 16, 8, 13, 6, 12, 10, 4, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    shell(a, n);

    for (auto i: a) {
        cout << i << " ";
    }

    return 0;
}

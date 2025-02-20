//
// Created by ahmed on 20/02/2025.
//
#include <iostream>

using namespace std;

struct node {
    int data;
    node* next;
};

void push(node*& head, int value) {
    node* newNode = new node{value, nullptr};

    if (!head || head->data >= value) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* current = head;
    while (current->next && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

int findmax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void Bins(int arr[], int n) {
    int max = findmax(arr, n);
    node** c = new node*[max + 1]();
    for (int i = 0; i < n; i++) {
        push(c[arr[i]], arr[i]);
    }

    int index = 0;
    for (int j = 0; j <= max; j++) {
        while (c[j] != nullptr) {
            arr[index++] = c[j]->data;
            node* temp = c[j];
            c[j] = c[j]->next;
            delete temp;
        }
    }

    delete[] c;
}

int main() {
    int arr[] = {8, 2, 9, 6, 5, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    Bins(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}

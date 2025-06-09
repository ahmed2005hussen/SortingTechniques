// Sorting Technique
// Created by ahmed on 20/02/2025.

// Not stable version 

#include <iostream>

using namespace std;

int findmax(int arr[],int n){
    int max = INT_MIN , i =0 ;
    for(;i<n;i++){
        if(arr[i] >max){
            max = arr[i];
        }
    }
    return max ;
}

void countSort(int arr[], int n){
    int i , j , max , *c ;
    max = findmax(arr,n);
    c = new int [max+1];
    for(i=0 ; i < max+1 ; i++)c[i]=0;

    for(i =0 ; i < n;i++) c[arr[i]]++;

    i = j = 0 ;

    while(j < max+1){
        if(c[j]>0){
            arr[i++]=j;
            c[j]--;
        }
        else j++;

    }

    delete[] c;
}


int main() {
    int arr[] = {8, 2, 9, 6, 5, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr,n );
    for (auto i: arr) {
        cout << i << ' ';
    }

}

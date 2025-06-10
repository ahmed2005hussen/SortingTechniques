// Sorting Technique
// Author :  ahmed hussein ahmed
// Date :  18/02/2025

#include <bits/stdc++.h>
using namespace std ;
// worst Case : O(n^2)
// Best Case : O(n) if it is arranged at all

void Bubble_Sort(int arr[] , int n ){
    bool flag ;
    for(int i = 0 ; i < n-1; i++){
        flag = false ;
        for(int j = 0 ; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
}
int main(){
    int arr[]={8,5,7,3,2};
    Bubble_Sort(arr,5);

    for(int i : arr){
        cout<< i << ' ';
    }
}

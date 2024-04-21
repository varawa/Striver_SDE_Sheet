#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

void selectionSort(vector<int>&arr) {
    // Write your code here.
    int i, j, min_idx;
    int n = arr.size() ;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
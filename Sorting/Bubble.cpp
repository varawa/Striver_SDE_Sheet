#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {
        flag = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
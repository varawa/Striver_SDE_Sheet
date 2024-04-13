#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    for(int i = 0 ; i < n-1 ; i++){
        if(i == 0){
            int temp = arr[n-1] ;
            arr[n-1] = arr[i] ;
            arr[i] = temp ;
        }
        else{
            int temp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = temp ;
        }
    }

    return arr ;
}

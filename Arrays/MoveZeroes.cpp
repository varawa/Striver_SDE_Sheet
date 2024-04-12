#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
    int n = arr.size() ;
    int j = -1 ;
    int i = 0 ;
    for( i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            j = i  ;
            break ;
        }
    }
    if(j == -1)
    {
        return ;
    }

    while(j < n){
        if(arr[j] != 0){
            swap(arr[i] , arr[j]) ;
            i ++  ;
        }
        j++ ;
    }
   
    }

};
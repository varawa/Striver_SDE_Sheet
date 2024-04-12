#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int sum = 0 , n =arr.size() ;
        int s = n*(n+1)/2 ;
        for(int i = 0 ; i < n ; i++){
            sum = sum + arr[i] ;
        }
        return s-sum ;
    }
};
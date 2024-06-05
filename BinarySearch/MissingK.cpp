#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0 ;
        int end = arr.size() - 1 ;
        int mid = (start + end)/2 ;

        while(start <= end){
            int check = arr[mid] - mid - 1 ;
            if(check < k){
                start = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
            mid = (start + end)/2 ;
        }

        return end + k + 1 ;
    }

};
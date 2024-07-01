#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>
#include<numeric>

using namespace std ;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

        int count = 0 ; 

        for(int i = 0 ; i < arr.size() ; i++){
            if(count == 3)  return true ;

            if(!isOdd(arr[i]))
                count = 0 ;
            else
                count++ ;
        }

        if(count == 3)  return true ;

        return false ;
    }

    bool isOdd(int num){
        if(num % 2 != 0)
            return true ;
        return false ;
    }
};
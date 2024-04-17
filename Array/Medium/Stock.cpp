#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ;
        int profit = 0 ;
        int j = 0 , temp = INT_MAX ;
        for(int i = 0 ; i < n ; i++){
           temp = min(temp , prices[i]) ;

           profit = max(profit , prices[i] - temp) ;
            
        }

        return profit ;
    }
};
#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        long long int start = 1 ;
       
        long long int end = *max_element(piles.begin(), piles.end());
        long long int mid = start + (end - start)/2 ;

        if(piles.size() == 1){
            if(piles[0] % h == 0)
                return piles[0]/h ;
            else
                return piles[0]/h + 1 ;
        }
        while(start <= end){
            long long int res = hours(piles , mid) ; 
            
            if (res <= h) {
                end = mid - 1; 
            }
            else{
                start = mid + 1 ;
            }
            
            mid = start + (end - start)/2 ;
            
        }
        return mid ;

    }
    long long int hours(vector<int> piles , long long int min){
        long long int h = 0 ;
        for(long long int i = 0 ; i < piles.size() ; i++){
            if(piles[i]%min == 0){
                h += piles[i]/min ;
            }
            else{
                h = h + piles[i]/min + 1 ;
            }
        }
        return h ;
    }
};
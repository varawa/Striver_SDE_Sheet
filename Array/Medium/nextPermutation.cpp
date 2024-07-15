#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    void nextPermutation(vector<int>& A) {
        if(A.size() == 0 || A.size() == 1)  return ;

        int start = A.size() - 2 ;
        int end = A.size() - 1 ;

        int ind = -1 ;

        while(start >= 0){
            if(A[start] < A[end]){
                ind = start ;
                break ;
            }
            start-- ;
            end-- ;
        }

        if(ind == -1){
            reverse(A.begin() , A.end()) ;
            return ;
        }  

        int max = INT_MAX ; 
        int n = -1 ;

        for(int i = A.size() - 1 ; i > ind ; i--){
            if(A[i] > A[ind] && A[i] < max){
                max = A[i] ;
                n = i ;
            }
        }
        swap(A[ind] , A[n]) ;
        
        reverse(A.begin() + ind + 1 , A.end()) ;
    }

};
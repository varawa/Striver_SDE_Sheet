#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    void nextPermutation(vector<int>& A) {
        if(A.size() == 0 || A.size() == 1)  return ;
        
        bool flag = false ;

        int start = A.size() - 2 ;
        int end = A.size() - 1 ;

        while(start >= 0){
            int max = INT_MAX ;
            int check = A[start] ;
            for(int j = start ; j < A.size() ; j++){
                if(A[j] < max && A[j] > check){
                    max = A[j] ;
                    int temp = A[j] ;
                    A[j] = A[start] ;
                    A[start] = temp ;
                    flag = true ;
                }
                sort(A.begin() + start + 1 , A.end()) ;
            }
            if(flag == true)    return ;
            start-- ;
        }
        if(flag == false)   sort(A.begin() , A.end()) ;
    }

};
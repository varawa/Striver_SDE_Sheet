#include<iostream>
#include<math.h>
#include<vector>

using namespace std ;

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        vector<int> ans(arr.size()) ;
    for(int i =  0 ; i  < arr.size()  ; i++){
        int index ;
        
            index = (i + k)%arr.size() ;
        

            ans[index] = arr[i] ;
    }
    arr = ans ;
    }
};
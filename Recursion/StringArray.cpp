#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v ;
        int i = 0 ;
        int num = 1 ;
        while(num <= n){
            if(i == target.size())
                break ;
            if(num != target[i]){
                v.emplace_back("Push") ;
                v.emplace_back("Pop") ;
            }else{
                v.emplace_back("Push") ;
                i++ ;
            }
            num++ ;
        }
        return v ;
    }
};
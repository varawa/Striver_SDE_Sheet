#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk ;

        for(auto c : s){
            if(!stk.empty() && stk.top() == '(' && c == ')'){
                stk.pop() ;
            }else{
                stk.push(c) ;
            }
        }
        int ans = 0 ; 
        while(!stk.empty()){
            ans++ ;
            stk.pop() ;
        }

        return ans ;
    }
};
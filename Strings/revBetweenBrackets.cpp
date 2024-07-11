#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stk ;
        string str = "" ;

        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] == '(') {
                stk.push(str) ;
                str = "" ;
            } else if (s[i] == ')') {
                reverse(str.begin() , str.end()) ; 
                if (!stk.empty()) {
                    str = stk.top() + str ;
                    stk.pop() ;
                }
            } else 
                str += s[i] ;
        }

        return str ;
    }
};

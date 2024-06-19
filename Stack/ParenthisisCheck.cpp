#include<bits/stdc++.h>

using namespace std ;


class Solution {
public:
    bool isValid(string x) {
    stack<char> s ;
    int i = 0 ;
    
    while(i < x.length()){
        if(!s.empty() && check(s.top() , x[i]))
            s.pop() ;
        else
            s.push(x[i]) ;
        i++ ;
    }

    if(s.empty())   return true ;

    return false ;
}

    bool check(char a , char b){
        if(a == '(' && b == ')')    return true ;
        if(a == '[' && b == ']')    return true ;
        if(a == '{' && b == '}')    return true ;

        return false ;
    }
};
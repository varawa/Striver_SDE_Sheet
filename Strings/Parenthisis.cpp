#include<iostream>
#include<math.h>
#include<stack>
#include<string>

using namespace std ;

class Solution
{
    public:
    
    bool ispar(string x)
    {
        stack<char> s ;
        int i = 0 ;
        
        while(x[i] != '\0'){
            
            if(s.empty()){
                s.push(x[i]) ;
            }
            else{   
                if((s.top() == '[' && x[i] == ']') || (s.top() == '{' && x[i] == '}') || (s.top() == '(' && x[i] == ')')){
                    s.pop() ;
                }    
                else{
                    s.push(x[i]) ;
                
                }
            }
                
            i++ ;
        }
        
        if(!s.empty())
            return false ;
        else
            return true ;
    }

};
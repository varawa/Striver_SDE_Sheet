#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = 0 ;

        for(int i = 0 ; i < logs.size() ; i++){
            if(logs[i] == "./" || (logs[i] == "../" && n == 0))  continue ;
                
            else if(logs[i] == "../")   n-- ;
                
            else   n++ ;
        }

        return n ;
    }
};
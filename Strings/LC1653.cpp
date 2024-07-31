#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length() ;
        int bCount = 0, aCount = 0 ;
        int deletions = 0 ;
        
        for (char c : s) {
            if (c == 'b') {
                bCount++ ;
            } else {
                deletions++ ;
                deletions = min(deletions , bCount) ;
            }
        }
        
        return deletions ;
    }
};
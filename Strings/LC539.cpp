#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> ans ;
        for(auto el : timePoints)
            ans.push_back(converted(el)) ;
        sort(ans.begin() , ans.end()) ;
        int smallest = INT_MAX ;
        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i] - ans[i - 1] < smallest)
                smallest = ans[i] - ans[i - 1] ;
        }
        smallest = min(smallest, 1440 - (ans.back() - ans[0]));
        return smallest ;
    }

    int converted(string s){
    int a = s[0] - 48 ;
    int b = s[1] - 48 ;
    int c = s[3] - 48 ;
    int d = s[4] - 48 ;

    return 60*(10*a + b) + c*10 + d ;
}
};


#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time = 0 ;
        int curr = 0 ;

        for (auto customer : customers) {
            int arrival = customer[0] ;
            int service = customer[1] ;
            if (curr < arrival) 
                curr = arrival ;
            int wait = curr - arrival + service ;
            time += wait ;
            curr += service ;
        }
        return time / customers.size() ;
    }
};
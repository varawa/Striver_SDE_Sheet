#include<bits/stdc++.h>

using namespace std ;


class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 4) {
        return 0;
    }
    
    sort(nums.begin(), nums.end());
    
    int low = 0;
    int high = nums.back() - nums.front();
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (canAchieveDifference(nums, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    
    return low;
    }

    bool canAchieveDifference(const vector<int>& nums_sorted, int diff) {
    
    int n = nums_sorted.size();
    for (int i = 0; i < 4; ++i) {
        if (nums_sorted[n - 4 + i] - nums_sorted[i] <= diff) {
            return true;
        }
    }
    return false;
}

};
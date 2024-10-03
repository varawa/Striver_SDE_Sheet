#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long int sum = 0;

        for (auto item : nums) 
            sum += item;

        long long int need = sum % p;

        if (need == 0)
            return 0;

        unordered_map<long long int, int> prefixMap;
        prefixMap[0] = -1; 

        long long int currentSum = 0;
        int minLength = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            currentSum %= p;

            long long int target = (currentSum - need + p) % p;

            if (prefixMap.find(target) != prefixMap.end()) {
                minLength = min(minLength, i - prefixMap[target]);
            }

            prefixMap[currentSum] = i;
        }

        return (minLength == nums.size()) ? -1 : minLength;
    }
};

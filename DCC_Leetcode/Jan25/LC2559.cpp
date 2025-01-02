#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> Prefix(n + 1, 0);

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; 
        vector<int>ans ;

        for(int i = 0 ; i < words.size() ; i++){
            Prefix[i + 1] = Prefix[i];
            if (vowels.count(words[i].front()) && vowels.count(words[i].back())) {
                Prefix[i + 1]++;  
            }
        }

        for (auto& query : queries) {
            int L = query[0], R = query[1];  
            ans.push_back(Prefix[R + 1] - Prefix[L]);  
        }
        return ans ;
    }

    
};
#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        set<int> min_terms ;
        set<int> max_terms ;

        vector<int> res ;

        for(int i = 0 ; i < matrix.size() ; i++){
            vector<int> row = matrix[i] ;
            int min = INT_MAX ;
            for(int j = 0 ; j < row.size() ; j++){
                if(row[j] < min){
                    min = row[j] ;
                }
            }
            min_terms.insert(min) ;
        }

        for(int i = 0 ; i < matrix[0].size() ; i++){
            int max = INT_MIN ;
            for(int j = 0 ; j < matrix.size()  ; j++){
                if(matrix[j][i] > max){
                    max = matrix[j][i] ;
                }
            }
            max_terms.insert(max) ;
        }

        for(auto item : min_terms){
            if(max_terms.count(item))
                res.push_back(item) ;
        }

        return res ;
    }
};
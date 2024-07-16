#include<bits/stdc++.h>

using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    string getDirections(TreeNode* root, int startValue, int destValue) {
        vector<string> start ;
        vector<string> dest ;
        PathFromRoot(root , startValue , start) ;
        PathFromRoot(root , destValue , dest) ;

        int common = 0 ;
        
        while(common < start.size() && common < dest.size() && start[common] == dest[common])
            common++ ;

        vector<string>res(start.size() - common , "U") ;

        res.insert(res.end() , dest.begin() + common , dest.end()) ;
        
        string result ;

        for(auto str : res)
            result += str ;

        return result ;
    }

    bool PathFromRoot(TreeNode* root , int target , vector<string>& path){
        if(!root)   return false ;

        if(root->val == target)
            return true ;

        path.emplace_back("R") ;
        if(PathFromRoot(root->right , target , path))
            return true ;
        path.pop_back() ;

        path.emplace_back("L") ;
        if(PathFromRoot(root->left , target , path))
            return true ;
        path.pop_back() ;

        return false ;
    }
};
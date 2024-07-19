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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res ;
        if(root == nullptr) return res ;

        queue<TreeNode*>q ;
        q.push(root) ;

        int zig_zag = 0 ;
        while(!q.empty()){
            vector<int>line ;
            int s = q.size() ;
            for(int i = 0 ; i < s ; i++){
                TreeNode* temp = q.front() ;
                q.pop() ;
                if(zig_zag % 2 == 0)
                    line.push_back(temp->val) ;
                else
                    line.insert(line.begin() , temp->val) ;
                if(temp->left)  q.push(temp->left) ; 
                if(temp->right) q.push(temp->right) ;
            }
            zig_zag++ ;
            res.push_back(line) ;
        }
        return res ;
    }
};
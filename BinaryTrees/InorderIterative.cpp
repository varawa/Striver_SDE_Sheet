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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res ;
        
        if(root == nullptr) return res ;

        stack<TreeNode*> stk ;
        TreeNode* node = root ;
        
        while(true){
            if(node){
                stk.push(node) ;
                node = node->left ;
            }else{
                if(stk.empty()) break ;
                node = stk.top() ;
                stk.pop() ;
                res.push_back(node->val) ;
                node = node->right ;
            }
        }

        return res ;
    }
};
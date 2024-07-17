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
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true ;
        
        int right = height(root->right) ;
        int left = height(root->left) ;

        if(abs(right - left) <= 1 && isBalanced(root->left) && isBalanced(root->right))
            return true ;

        return false ;
    }

    int height(TreeNode* root){
        if(root == nullptr) return 0 ; 

        int right = height(root->right) ;
        int left = height(root->left) ;

        return max(left , right) + 1 ;
    }
};


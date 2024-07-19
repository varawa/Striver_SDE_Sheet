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
    bool isSymmetric(TreeNode* root) {
        return mirror(root->right , root->left) ;
    }

    bool mirror(TreeNode* a , TreeNode* b){
        if(!a && !b)    return true ;
        if(!a && b)    return false ;
        if(a && !b)    return false ;

        if(a->val == b->val && mirror(a->left , b->right) && mirror(a->right , b->left))
            return true ;

        return false ;

    }
};
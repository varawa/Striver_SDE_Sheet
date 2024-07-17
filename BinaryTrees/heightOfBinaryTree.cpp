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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0 ;

        int right = 1 + maxDepth(root->right) ;
        int left = 1 + maxDepth(root->left) ;

        return max(right , left) ;
    }
};
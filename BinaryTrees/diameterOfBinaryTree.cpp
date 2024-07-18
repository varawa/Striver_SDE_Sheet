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

    int ans=0;

    int heightModified(TreeNode* root){
        if(root == NULL)    return 0 ;

        int m=heightModified(root->left) ;
        int n=heightModified(root->right) ;

        ans = max(ans,m+n) ;
        return 1 + max(m,n) ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        heightModified(root) ;
        return ans ;
    }
};
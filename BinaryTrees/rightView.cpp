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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> queue;
        queue.push(root);
        while (!queue.empty()) {
            int n = queue.size();
            vector<int> values;
            for (int i = 0; i < n; ++i) {
                TreeNode* node = queue.front();
                queue.pop();
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
                values.push_back(node->val);
            }
            result.push_back(values.back());
        }
        return result;
    }
};
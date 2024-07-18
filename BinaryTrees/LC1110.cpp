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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res ; 

        if(root == nullptr) return res ;

        unordered_set<int>del(to_delete.begin() , to_delete.end()) ;

        queue<TreeNode*> q ;
        TreeNode* temp = root ;
        q.push(root) ;

        while(!q.empty()){
            temp = q.front() ;
            q.pop() ;

            if(temp->left){
                q.push(temp->left) ;
                if(del.count(temp->left->val)){
                    temp->left = nullptr ;
                }
            }
            if(temp->right){
                q.push(temp->right) ;
                if(del.count(temp->right->val)){
                    temp->right = nullptr ;
                }
            }

            if(del.count(temp->val)){
                if(temp->right)
                    res.push_back(temp->right) ;
                if(temp->left)
                    res.push_back(temp->left) ;
            }else if(res.size() == 0){
                res.push_back(temp) ;
            }
        }

        return res ;
    }
};
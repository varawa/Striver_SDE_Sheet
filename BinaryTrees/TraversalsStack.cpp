#include<bits/stdc++.h>

using namespace std ;
    
class TreeNode{
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.

    vector<vector<int>> res ;

    if(root == nullptr)    return res ;
    
    vector<int> pre ;
    vector<int> post ;
    vector<int> ino ;

    stack<pair<TreeNode* , int>> stk ;
    stk.push({root , 1}) ;

    while(!stk.empty()){
        auto& s = stk.top() ;
        TreeNode* node = s.first ;
        int &num = s.second ;

        if(num == 1){
            pre.push_back(node->data) ;
            num++ ;
            if (node->left) {
                stk.push({node->left, 1});
            }
        }
        else if(num == 2){
            ino.push_back(node->data) ;
            num++ ;
            if (node->right) {
                stk.push({node->right, 1});
            }
        }
        else{
            post.push_back(node->data) ;
            stk.pop() ;
        }

    } 

    res.push_back(ino) ;
    res.push_back(pre) ;
    res.push_back(post) ;


    return res ;
}
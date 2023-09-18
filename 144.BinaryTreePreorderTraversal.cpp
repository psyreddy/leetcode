/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// recursive


class Solution {
public:
    
    void pre(TreeNode * root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        pre(root->left,ans);
        pre(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        pre(root,ans);
        return ans;
    }
};


// Iterative
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        s.push(root);
        vector<int> ans;
        if(root==NULL) return ans;
        while(!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            if(temp->right!=NULL) s.push(temp->right);
            if(temp->left!=NULL) s.push(temp->left);
        }
        return ans;
    }
};
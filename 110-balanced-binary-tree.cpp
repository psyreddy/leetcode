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
// Naive implementation

    // class Solution {
    // private:
    //     int height(TreeNode* root){
    //             if(root==NULL) return 0;
    //             return max(height(root->left),height(root->right))+1;
    //         }
    // public:
    //     bool isBalanced(TreeNode* root) {
    //         if(root==NULL) return true;
    //         int hl = height(root->left);
    //         int hr = height(root->right);
    //         if(abs(hl - hr)>1) return false;
    //         return (isBalanced(root->left) && isBalanced(root->right));
            
    //     }
    // };

// Optimised version

class Solution {
private:
    int height(TreeNode* root){
        
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        
    }
};
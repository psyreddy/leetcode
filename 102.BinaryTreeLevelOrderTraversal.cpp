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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        ans.push_back({root->val});
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int c = q.size();
            TreeNode* t = q.front();
            
            while(c){
                q.pop();
                if(t->left!=NULL) 
                {
                    temp.push_back(t->left->val);
                    q.push(t->left);
                }
                if(t->right!=NULL) 
                {
                    temp.push_back(t->right->val);
                    q.push(t->right);
                }
                t = q.front();
                c--;
            }
            if(temp.size())
            ans.push_back(temp);
        }
        return ans;
    }
};
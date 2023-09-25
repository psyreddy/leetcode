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

// Level order traversal from bottom to top

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        ans.push_back({root->val});
        q.push(root);
        while(!q.empty()){
            int c = q.size();
            TreeNode* temp = q.front();
            vector<int> t ;
            while(c--){
                q.pop();
                if(temp->left!=NULL){
                    t.push_back(temp->left->val);
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    t.push_back(temp->right->val);
                    q.push(temp->right);
                }
                temp = q.front();
            }
            if(t.size()>0)
            ans.push_back(t);
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            vector<int> curr;
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* front=q.front();
                curr.push_back(front->val);
                q.pop();
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
            }
            if(level%2==0){
                reverse(curr.begin(),curr.end());
            }
            ans.push_back(curr);
            level++;
        }
        return ans;
    }
};

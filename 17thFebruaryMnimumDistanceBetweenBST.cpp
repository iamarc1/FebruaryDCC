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
    void inorder(TreeNode* root,vector<int> &in){
        if(root==NULL) return;
        
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
        
    }
    int minDiffInBST(TreeNode* root) {
        if(!root) return 0;
        vector<int> in;
        inorder(root,in);
        for(auto &i: in) cout<<i;
        int ans=INT_MAX;
        for(int i=1; i<in.size(); i++){
            ans=min(ans,in[i]-in[i-1]);
        }
        return ans;
    }
};

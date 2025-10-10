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
    int m, ans;
    int n = 0;

    void solve(TreeNode* root){
        if(root->left){
            solve(root->left);
        }
        
        n++;
        if(n == m){
            ans = root->val;
        }

        if(root->right){
            solve(root->right);
        }


    }
    int kthSmallest(TreeNode* root, int k) {
        m = k;
        solve(root);

        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans;
    bool f = 0;

    int solve(TreeNode* root, TreeNode* p, TreeNode* q){
        int l, r, curr;
        l = 0;
        r = 0;
        curr = 0;

        if(root == p || root == q){
            curr = 1;
        }
        if(root->left){
            l = solve(root->left, p, q);
        }
        if(root->right){
            r = solve(root->right, p, q);
        }

        if(l+r+curr == 2){
            if(!f){
                ans = root;
                f = 1;
            }
        }

        return l+r+curr;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int a = solve(root, p, q);

        return ans; 
    }
};
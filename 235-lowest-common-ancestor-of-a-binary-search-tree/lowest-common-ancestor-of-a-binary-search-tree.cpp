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

    pair<bool, bool> solve(TreeNode* root, TreeNode* p, TreeNode* q){
        pair<bool, bool> l, r, curr;
        l.first = 0;
        l.second = 0;
        r.first = 0;
        r.second = 0;
        curr.first = 0;
        curr.second = 0;

        if(root->left){
            l = solve(root->left, p, q);
        }
        if(root->right){
            r = solve(root->right, p, q);
        }

        if(root == p){
            curr.first = 1;
        }
        else if(root == q){
            curr.second = 1;
        }

        curr.second = curr.second | (l.second | r.second);
        curr.first = curr.first | (l.first | r.first);

        if(curr.first & curr.second){
            if(!f){
                ans = root;
                f = 1;
            }
        }

        return curr;

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        pair<bool, bool> pp = solve(root, p, q);

        return ans;
    }
};
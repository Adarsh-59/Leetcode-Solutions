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
    pair<bool, pair<long long, long long>> f(TreeNode* root){
        pair<bool, pair<long long , long long>> pbi, l, r; 

        l = r = {1, {(long long)INT_MAX+1, (long long)INT_MIN-1}};

        if(root -> left){
            l = f(root->left);
        }
        if(root->right){
            r = f(root->right);
        }

        bool comp = 0;

        if(l.second.second < root->val && root->val < r.second.first){
            comp = 1;
        }


        long long m, M;
        m = (long long)min((long long)root->val, (long long)min((long long)l.second.first, (long long)r.second.first));
        M = (long long)max((long long)root->val, (long long)max((long long)l.second.second, (long long)r.second.second));

        pbi.first = comp & (l.first & r.first);
        pbi.second = {m, M};

        return pbi;
    }
    bool isValidBST(TreeNode* root) {
        pair<bool, pair<long long , long long>> p;
        TreeNode *temp = root;

        p = f(root);
        return p.first;
    }
};
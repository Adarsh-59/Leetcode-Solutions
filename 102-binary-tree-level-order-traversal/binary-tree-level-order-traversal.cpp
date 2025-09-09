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
    vector<vector<int>> vv;

    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root){
            return vv;
        }
        
        q.push(root);
        q.push(NULL);

        vector<int> v;
        while(q.size()){
            TreeNode* f = q.front(); 
            q.pop();
            if(f == NULL){
                if(!q.empty()){
                    q.push(NULL);
                }
                vv.push_back(v);
                v = {};
            }
            else{
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }

                v.push_back(f->val);
            }



        }

        return vv;

    }
};
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
    vector<string> v={};
    string s={};
    
    void TreePaths(TreeNode* root, string s){
        if(!root){
            return;
        }
        else{
            s += to_string(root->val);
            bool flag = 0;
            if(root->left){
                s += "->";
                flag = 1;
                TreePaths(root->left, s);
            }

            if(root->right){
                if(!flag){
                    s += "->";
                }
                TreePaths(root->right, s);
            }

            if((!root->left) && (!root->right)){
                v.push_back(s);
            }
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        TreePaths(root, s);
        return v;
        

    }
};
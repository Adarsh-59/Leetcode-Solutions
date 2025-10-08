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
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return root;
        }
        else{
            TreeNode *temp, *left_node, *right_node;

            left_node = NULL;
            right_node = NULL;
            
            if(root->left){
                left_node = invertTree(root->left);
            }

            if(root->right){
                right_node = invertTree(root->right);
            }

            temp = left_node;
            root->left = right_node;
            root->right = temp;

            return root;
        }
    }
};
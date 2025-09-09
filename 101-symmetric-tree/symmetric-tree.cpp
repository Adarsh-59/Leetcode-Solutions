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
    bool isSym(TreeNode* t1, TreeNode* t2){
        bool ans1, ans2;
        if(t1->val != t2->val){
            return false;
        }
        else{
            if(t1->left){
                if(t2->right){
                    ans1 = isSym(t1->left, t2->right);
                }
                else{
                    ans1 = 0;
                }
            }
            else{
                if(t2->right){
                    ans1 = 0;
                }
                else{
                    ans1 = 1;
                }
            }

            if(t1->right){
                if(t2->left){
                    ans2 = isSym(t1->right, t2->left);
                }
                else{
                    ans2 = 0;
                }
            }
            else{
                if(t2->left){
                    ans2 = 0;
                }
                else{
                    ans2 = 1;
                }
            }

            return ans1&&ans2;
        }
    }

    bool isSymmetric(TreeNode* root) {
        TreeNode* t1, *t2;

        t1 = root->left;
        t2 = root->right;

        if(!t1 && !t2){
            return true;
        }
        else if(t1 && t2){
            return isSym(t1, t2);
        }
        else{
            return false;
        }
    }
};
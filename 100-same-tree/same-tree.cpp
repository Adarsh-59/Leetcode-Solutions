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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans1, ans2;
        
        if(p == NULL){
            if(q == NULL){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(q == NULL){
                return false;
            }
            else{
                if(p->val != q->val){
                    return false;
                }
                else{
                    if(p->left){
                        if(q->left){
                            ans1 = isSameTree(p->left, q->left);
                        }
                        else{
                            ans1 = 0;
                        }
                    }
                    else{
                        if(q->left){
                            ans1 = 0;
                        }
                        else{
                            ans1 = 1;
                        }
                    }

                    if(p->right){
                        if(q->right){
                            ans2 = isSameTree(p->right, q->right);
                        }
                        else{
                            ans2 = 0;
                        }
                    }
                    else{
                        if(q->right){
                            ans2 = 0;
                        }
                        else{
                            ans2 = 1;
                        }
                    }

                    return ans1 && ans2;
                }
            }
        }

        
    }
};
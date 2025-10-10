/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    queue<int> q; 
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;

        if(temp){
            q.push(temp->val);
            bool ans = isPalindrome(temp->next);

            if(temp->val == q.front()){
                q.pop();
                return 1&ans;
            }
            else{
                return 0;
            }

        }
        else{
            return 1;
        }


    }
};
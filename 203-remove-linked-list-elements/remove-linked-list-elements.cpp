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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr, *prev;
        
        curr = head;
        prev = head;
        while(curr != NULL){
            if(curr->val == val){
                if(curr == head){
                    head = head->next;  
                    curr = curr->next;
                    prev = prev->next;
                }
                else{
                    curr = curr->next;
                    prev->next = curr;
                }
            }        
            else{
                if(curr != head){
                    prev = prev->next;
                }
                curr = curr->next;
            }
        }
        
        return head;
    }
};
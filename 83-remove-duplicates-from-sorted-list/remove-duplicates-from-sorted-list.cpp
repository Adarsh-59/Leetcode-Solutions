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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* n;
        
        if(temp == NULL || temp->next == NULL){
           return head;
        }
        while(temp != NULL){
            for(n = temp ; n != NULL && n->val == temp->val ; n= n->next);
            temp->next = n;
            temp = temp->next;
        }
        
        return head;
    }
};
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
    ListNode* swap(ListNode* head){
        ListNode* ans = NULL;
        if(head->next){
            if(head->next->next){
                ans = swap(head->next->next);
            }
        }
        else{
            return head;
        }

        ListNode* temp = head->next;
        temp->next = head;
        head->next = ans;

        return temp;
    }

    ListNode* swapPairs(ListNode* head) {
        if(head){
            return swap(head);
        }

        return head;
    }
};
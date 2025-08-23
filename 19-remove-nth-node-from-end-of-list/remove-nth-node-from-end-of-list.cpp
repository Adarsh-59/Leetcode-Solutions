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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        int l = 0;

        while(temp1){
            temp1 = temp1->next;
            l++;
        }

        if(l == n){
            head = head->next;
            return head;
        }

        temp1 = head;
        for(int i=1 ; i<l-n ; i++){
            temp1 = temp1->next;
        }

        temp1->next = temp1->next->next;

        return head;
    }
};
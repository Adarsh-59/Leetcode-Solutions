/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1, l2;
        ListNode *temp1, *temp2;
        l1 = 0;
        l2 = 0;

        temp1 = headA;
        while(temp1 != NULL){
            l1++;
            temp1 = temp1->next;
        }
        temp2 = headB;
        while(temp2 != NULL){
            l2++;
            temp2 = temp2->next;
        }
        
        
        temp1 = headA;
        temp2 = headB;
        
        
        if(l1>l2){
            while(l1>l2){
                temp1 = temp1->next;
                l1--;
            }
        }
        else{
            while(l2>l1){
                temp2 = temp2->next;
                l2--;
            }
        }
        
        while(temp1 || temp2){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return NULL;
    }
};
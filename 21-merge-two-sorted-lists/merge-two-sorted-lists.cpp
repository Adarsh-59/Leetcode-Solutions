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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        ListNode *temp, *head;

        if(!h1){
            return h2;
        }
        else if(!h2){
            return h1;
        }

        if(h1->val <= h2->val){
            head = h1;
            h1 = h1->next;
        }
        else{
            head = h2;
            h2 = h2->next;
        }

        temp = head;
        while(h1 || h2){
            if(h1){
                if(h2){
                    if(h1->val <= h2->val){
                        temp -> next = h1;
                        h1 = h1 -> next;
                        temp = temp->next;
                    }
                    else{
                        temp -> next = h2;
                        h2 = h2 -> next;
                        temp = temp->next;
                    }
                }
                else{
                    temp -> next = h1;
                    h1 = h1->next;
                    temp = temp->next;
                }
            }
            else{
                temp -> next = h2;
                h2 = h2->next;
                temp = temp->next;
            }
        }

        return head;
    }
};
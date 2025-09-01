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
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp = head, *temp1, *temp2;
        ListNode *l, *g;
        
        l = NULL;
        g = NULL;
        while(temp){
            if(temp->val < x){
                if(l){
                    temp1->next = new ListNode(temp -> val);
                    temp1 = temp1->next;
                }
                else{
                    temp1 = new ListNode(temp->val);
                    l = temp1;
                }
            } 
            else{
                if(g){
                    temp2->next = new ListNode(temp -> val);
                    temp2 = temp2->next;
                }
                else{
                    temp2 = new ListNode(temp->val);
                    g = temp2;
                }
            }

            temp = temp->next;
        }

        if(l){
            temp = l;
            while(temp && temp->next){
                temp = temp->next;
            }

            temp -> next = g;

            return l;
        }

        if(g){
            return g;
        }
        else{
            return NULL;
        }
    }
};
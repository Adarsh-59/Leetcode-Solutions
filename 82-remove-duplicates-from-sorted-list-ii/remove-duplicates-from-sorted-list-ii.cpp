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
        ListNode* temp, *temp1, *temp2;
        temp = head;

        while(temp){
            if(temp->next && temp->val == temp->next->val){
                temp1 = temp->next;
                while(temp1 && temp1->val == temp->val){
                    temp1 = temp1->next;
                }
                
                head = temp1;
                temp = temp1;
            }
            else if(temp->next && temp->next->next && temp->next->val == temp->next->next->val){
                temp1 = temp->next;
                while(temp1 && temp1->next && temp1->val == temp1->next->val){
                    temp1 = temp1->next;
                }

                temp->next = temp1->next;
            }
            else{
                temp = temp->next;
            }
        }

        return head;
    }
};
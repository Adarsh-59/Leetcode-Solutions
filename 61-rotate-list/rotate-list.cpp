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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp1, *temp2;
        temp1 = head;

        int l = 0;
        while(temp1){
            l++;
            temp1 = temp1 -> next;
        }
        if(l){
            k = k%l;

            if(k){
                temp1 = head;
                temp2 = head;
                for(int i=1 ; i<l-k ; i++){
                    temp2 = temp2->next;
                }

                head = temp2->next;
                temp2 -> next = NULL;

                temp2 = head;
                while(temp2 && temp2->next){
                    temp2 = temp2->next;
                }
                temp2->next = temp1;
            }
        }

        return head;
    }
};
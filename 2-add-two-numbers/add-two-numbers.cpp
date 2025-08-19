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
    // Adarsh
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *h1, *h2, *temp1, *temp2, *h3 = NULL, *prev;
        h1 = l1;
        h2 = l2;

        // h1 = reverse(h1);
        // h2 = reverse(h2);

        temp1 = h1;
        temp2 = h2;

        int sum, carry = 0;
        while(temp1 || temp2){
            sum = carry;
            
            if(temp1){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2){
                sum += temp2->val;
                temp2 = temp2->next;
            }

            carry = sum/10;
            sum %= 10;

            if(!h3){
                h3 = new ListNode(sum);
                prev = h3;
            }
            else{
                prev->next = new ListNode(sum);
                prev = prev->next;
            }
        }

        if(carry){
            prev->next = new ListNode(carry);
        }

        return h3;
    }
};
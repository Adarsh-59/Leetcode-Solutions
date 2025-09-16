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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow, *fast, *temp;
        slow = head;
        fast = head;
        temp = NULL;

        bool flag = 0;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                flag = 1;
                break;
            }
        }

        if(flag){
            temp = head;
            while(temp!=slow){
                temp = temp->next;
                slow = slow->next;
            }

            return temp;
        }
        else{
            return temp;
        }
    }
};
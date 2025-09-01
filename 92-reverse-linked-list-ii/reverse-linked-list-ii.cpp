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
    ListNode* rev(ListNode* left, ListNode* right){
        if(left == right){
            return right;
        }

        ListNode* ans = rev(left->next, right);
        ans->next = left;
        return left;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *l, *r, *temp, *ll, *rr;
        
        ll = NULL;

        temp = head;
        while(--left){
            ll = temp;
            temp = temp->next;
        }
        l = temp;
        
        temp = head;
        while(--right){
            temp = temp->next;
        }
        r = temp;
        rr = r->next;

        l = rev(l, r);

        if(!ll){
            head = r;
        }
        else{
            ll->next = r;
        }

        l->next = rr;

        return head;
    }
};
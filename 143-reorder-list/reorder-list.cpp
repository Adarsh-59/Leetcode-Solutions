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
    ListNode* f(ListNode* head, ListNode* l, ListNode* r){
        ListNode *left, *right;
        left = l;
        right = r;

        if(r->next){
            left = f(head, l, r->next);

            if(left == NULL){
                return NULL;
            }
        }

        if(left == right || left -> next == right){
            right -> next = NULL;
            return NULL;
        }
        else{
            right -> next = left->next;
            left -> next = right;
            left = right->next;
            return left;
        }
    }
    void reorderList(ListNode* head) {
        if(!head->next){
            return;
        }

        
        ListNode *l, *r, *temp;
        l = head;
        r = head->next;

        temp = f(head, l, r);
    }
};
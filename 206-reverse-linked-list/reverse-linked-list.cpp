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
    ListNode* reverseList(ListNode* head) {
        ListNode *f, *s, *t;
        f = head;

        if(!f || !f->next){
            return f;
        }

        s = f->next;
        t = s->next;

        while(s){
            s->next = f;
            f = s;
            s = t;

            if(t){
                t = t->next;
            }
        }

        head->next = NULL;

        return f;
    }
};
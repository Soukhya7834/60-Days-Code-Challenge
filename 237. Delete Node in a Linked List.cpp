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
    void deleteNode(ListNode* node) {
        if(node == NULL)
            return;
        ListNode* t = node->next;
        node->val = t->val ;
        node->next = node->next->next;      // d is an extra now, so delete it
        // OR node->next = t ->next;
        delete t;
    }
};


/*
a b c d e f  If we have to delete c, later it is a b d d e f, so delete the extra d
*/

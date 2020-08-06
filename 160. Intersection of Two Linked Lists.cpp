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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto currA = headA, currB = headB;
        int c1=0, c2=0;
        
        while(currA){
            currA = currA->next;
            c1++;
        }
        
        while(currB){
            currB = currB->next;
            c2++;
        }
        
        int diff = abs(c1-c2);
        
        if(c2> c1)
            swap(headA, headB);
        
        while(diff--)
            headA = headA->next;
        
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;            //beak the loop when things are equal and pass it asap
        }
        return headA;

        
        
    }
};

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);   //need head 
        ListNode* cur = head;           // cur is basically a temp pointer, which will keep traversing
        
        int num=0, p=0;
        while(l1 || l2){
            num =0;
            num = (l1? l1->val:0) + (l2? l2->val:0)+p;
            if(num >= 10){
                num -= 10;
                p = 1 ;
            }
            else p =0;
            
            cur->next = new ListNode(num);
            cur = cur->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            
        }
        if(p==1)
            cur->next = new ListNode(1);
        return head->next;    //just passing head will return [0, ans]
           
    }
};

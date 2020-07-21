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
    ListNode* middleNode(ListNode* head) {
        ListNode *sp=head;   //slow pointer
        ListNode *fp=head;   //fast pointer
        
        //2 cases - even / odd
  
        while(true){
            if(fp == NULL)      must : check even first 
                break;
            else if(fp->next == NULL)
                break;
            
            fp = fp->next->next;
            sp = sp->next;          
        }
        return sp;
        
    }
};

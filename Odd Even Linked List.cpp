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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode*a= head;
        ListNode*b= a->next;
        
        ListNode*p=a;
        ListNode*q=b;
        
        while(p!=NULL && q!=NULL)
        {
            p->next=q->next;
            if(q->next==NULL)
                break;
                
            q->next=q->next->next;
            
            
            p=p->next;
            q=q->next;
        }
        p->next=b;
        
        return a;
        
    }
};

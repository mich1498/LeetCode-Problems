/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public: ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *dummyhead = new ListNode(0);
    ListNode *p=l1, *current=dummyhead, *q=l2; 
    int carry =0; 
    while(p!=NULL || q!=NULL)
    {
        int x=(p!=NULL)?p->val:0;
        int y=(q!=NULL)?q->val:0;
        int sum=carry+x+y; 
        carry = sum/10; 
        current->next= new ListNode(sum%10);
        current=current->next; 
        if (p!=NULL) p=p->next;
        if(q!=NULL) q=q->next;
    }
    if( carry!=0)
    {
        current->next=new ListNode(carry);
    }
        return dummyhead->next;
   
        
}
    

};

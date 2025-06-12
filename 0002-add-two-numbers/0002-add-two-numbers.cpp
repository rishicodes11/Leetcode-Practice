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
        ListNode* dummynode=new ListNode(-1);
        int carry=0;
        ListNode* curr= dummynode;
        while(l1 || l2){
            int val1 = (l1 ? l1->val : 0);
            int val2 = (l2 ? l2->val : 0);
            
            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode* newnode= new ListNode(digit);
            curr->next=newnode;
            curr=newnode;

            if(l1) l1=l1->next;
            if(l2) l2=l2->next;

        }
        if(carry){
             ListNode* newnode= new ListNode(carry);
             curr->next=newnode;
        }
        return dummynode->next;
    }
};
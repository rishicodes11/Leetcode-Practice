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

    ListNode* reverseit(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* last= reverseit(head->next);
        head->next->next=head;
        head->next=nullptr;
        return last;
    }
    void reorderList(ListNode* head) {
        //1.find middle 
        //2. reverse from middle
        //3. do some stuff

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        // now slow is at middle of the ll, which we wanna reverse
      ListNode* rev=reverseit(slow);
        // we have reversed the half of the linkedlist here and also have the last node 
        // now do the thing 
        ListNode* curr=head;
        while(rev->next){
            ListNode* headnext=curr->next;
            curr->next=rev;
            ListNode* revnext=rev->next;
            rev->next=headnext;
            curr=headnext;
            rev=revnext;
        }
    }
};
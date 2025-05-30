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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next && n==1) return NULL;
        //first find size
        ListNode* temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }
        cout<<size;
        if(size==n){
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
        // target node = size-n+1;
        int count=0;
        temp=head;
        while(count<size-n+1){
            count++;
            if(count==size-n){
                temp->next=temp->next->next;
                return head;
            }
            temp=temp->next;
        }
    return head;
    }
};
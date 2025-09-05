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

    ListNode* convert(vector<int> &nodeArr, ListNode* &dNode){
            int i=0;
            ListNode* temp=dNode;
            while(i<nodeArr.size()){
                ListNode* newNode= new ListNode(nodeArr[i]);
                temp->next=newNode;
                temp=newNode;
                i++;
            }
            return dNode->next;
    }

    ListNode* sortList(ListNode* head) {
        //brute
        //put all in array, make ll out of it 
        if(!head) return head;
        vector<int>nodeArr;
        while(head){
            nodeArr.push_back(head->val);
            head=head->next;
        }
        sort(nodeArr.begin(),nodeArr.end());
        ListNode* dNode= new ListNode(-1);
        return convert(nodeArr,dNode);

    }
};
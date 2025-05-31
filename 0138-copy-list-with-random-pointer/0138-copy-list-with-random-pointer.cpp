/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertingcopynodes(Node* head){
        Node* temp=head;
        while(temp){
            Node* copynode= new Node(temp->val);
            copynode->next=temp->next;
            temp->next=copynode;
            temp=temp->next->next;
        }
    }
    void markingrandompointers(Node* head){
        Node* temp=head;
        while(temp){if(temp->random)
        temp->next->random=temp->random->next;
        else
        temp->next->random=nullptr;

        temp=temp->next->next;}
    }
    Node* makingfinallist(Node* head){
        Node* dummynode=new Node(-1);
        Node*rest=dummynode;
        Node* temp=head;
        rest->next=temp->next;
        rest=rest->next;
        while(temp){
            temp->next=rest->next;
            if(rest->next)
            rest->next=rest->next->next;
            else rest->next=nullptr;
            temp=temp->next;
            rest=rest->next;
        }
        return dummynode->next;
    }
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        insertingcopynodes(head);
        markingrandompointers(head);
         return makingfinallist(head);

    }
};
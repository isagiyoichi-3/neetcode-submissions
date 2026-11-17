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
    
    Node* copyRandomList(Node* head) {
        map<Node*,Node*> mp;
        Node* temp=head;
        while(temp!=nullptr){
            mp.insert({temp,new Node(temp->val)});
            temp=temp->next;
        }

        Node* resp=head;
        Node* dummy=new Node(-1);
        Node* res=dummy;
        while(resp!=nullptr){
            mp[resp]->next=mp[resp->next];
            mp[resp]->random=mp[resp->random];
            dummy->next=mp[resp];
            dummy=dummy->next;
            resp=resp->next;
        }
        return res->next;
    }
};

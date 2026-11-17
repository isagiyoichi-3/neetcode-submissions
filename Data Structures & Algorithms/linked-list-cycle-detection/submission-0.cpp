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
    bool hasCycle(ListNode* head) {
        map<ListNode*,int> m;
        ListNode* temp=head;
        while(temp!=nullptr){
            m[temp->next]++;
            if(m[temp->next]>1){
                return true;
            }
            temp=temp->next;
        }
        return false;
        
    }
};

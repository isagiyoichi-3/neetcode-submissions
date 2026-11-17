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
        ListNode* temp=head;
        if(head==nullptr) return head;
        int length=0;
        ListNode* temp1=head;
        while(temp1!=nullptr){
            length++;
            temp1=temp1->next;
        }
        int cal=length-n+1;
        if(cal==1){
            ListNode* tobedeleted=temp;
            temp=temp->next;
            delete tobedeleted;
            return temp;
        }
        else{
            int i=0;
            ListNode* prev=nullptr;
            while(temp!=nullptr){
                i++;
                if(i==cal){
                    prev->next=temp->next;
                    delete temp;
                    break;
                }
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
        
    }
};

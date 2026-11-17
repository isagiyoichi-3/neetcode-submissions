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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;
        if(list2==nullptr) return list1;
        if(list1==nullptr&&list2==nullptr) return list1;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* res;
        ListNode* head;
        if(temp1->val<=temp2->val){
            res=temp1;
            temp1=temp1->next;
            head=res;
        }
        else{
            res=temp2;
            temp2=temp2->next;
            head=res;
        }
        while(temp1!=nullptr||temp2!=nullptr){
            if(temp1!=nullptr&&temp2!=nullptr&&temp1->val<=temp2->val){
                res->next=temp1;   
                temp1=temp1->next;
                res=res->next;
            }
            else if(temp1!=nullptr&&temp2!=nullptr&&temp1->val>temp2->val){
                res->next=temp2;
                temp2=temp2->next;
                res=res->next;
            }
            else if(temp1==nullptr&&temp2!=nullptr){
                res->next=temp2;
                break;
            }
            else if(temp1!=nullptr&&temp2==nullptr){
                res->next=temp1;
                break;
            }
        }
        return head;

        
    }
};

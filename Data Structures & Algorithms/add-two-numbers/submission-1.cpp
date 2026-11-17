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
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        long long n1=0,n2=0,n=0;
        int carry=0;
        int add=temp1->val+temp2->val;
        temp1=temp1->next;
        temp2=temp2->next;
        ListNode* head;
        ListNode* result;
        if(add/10>0){
            head=new ListNode(add%10);
            result=head;
            carry=add/10;
        }
        else{
            ListNode* head=new ListNode(add);
            result=head;
        }
        while(temp1!=nullptr||temp2!=nullptr){
            int val1,val2;
            if(temp1!=nullptr) {
                val1=temp1->val;
                temp1=temp1->next;
                
            }
            else{
                val1=0;
            }
            if(temp2!=nullptr) {
                val2=temp2->val;
                temp2=temp2->next;
                
            }
            else{
                val2=0;
            }
        
            int sum=val1+val2+carry;
            if(sum/10>0){
                carry=sum/10;
            }
            else{
                carry=0;
            }
            head->next=new ListNode(sum%10);
            head=head->next;
        }
        if(carry>0){
            head->next=new ListNode(carry);
        }
        return result;
    }
};

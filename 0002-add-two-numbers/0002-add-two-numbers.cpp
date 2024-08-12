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
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr){
            int sum = 0;
            if(l1 != nullptr){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2 != nullptr){
                sum+=l2->val;
                l2=l2->next;
            }
            sum += carry;
            carry = sum /10;
            ListNode* newnode=new ListNode(sum%10);
            curr->next = newnode;
            curr = curr->next;
            
        }
        if(carry == 1){
            ListNode* last = new ListNode(1);
            curr->next = last;
        }
        return dummy->next;


        return dummy->next;;
    }
};
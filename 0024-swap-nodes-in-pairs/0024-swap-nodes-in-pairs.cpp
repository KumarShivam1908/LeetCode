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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        ListNode* front;
        if(head == nullptr || head->next==nullptr){
            return head;
        }
        while(temp != nullptr && temp->next != nullptr){
            front = temp->next;
            int dummy = temp->val;
            temp->val = front->val;
            front->val = dummy;
            temp=temp->next->next;
        }
        return head;
    }
};
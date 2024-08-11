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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        while(temp != nullptr){
            size++;
            temp=temp->next;
        }
        temp = head;
        int mid = ((size/2)+1);
        int k = 0 ;
        if(head == nullptr){
            return head;
        }
        while(temp != nullptr){
            k++;
            if(k==mid){
                return temp;
            }
            else{
                temp=temp->next;
            }
        }
        return temp;
        
    }
};
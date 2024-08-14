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
    int getDecimalValue(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        
        // Step 1: Calculate the length of the linked list
        while(temp != nullptr) {
            length++;
            temp = temp->next;
        }
        
        int decimalValue = 0;
        temp = head;
        
        // Step 2: Traverse the list and calculate the decimal value
        while(temp != nullptr) {
            // Multiply the node's value by 2^(length-1) and add to the decimal value
            decimalValue += temp->val * pow(2, length-1);
            length--;
            temp = temp->next;
        }
        
        return decimalValue;
    }
};

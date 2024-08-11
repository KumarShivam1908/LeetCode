/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* get_intersection(ListNode* t1, ListNode* t2, int d) {
        while (d) {
            d--;
            t1 = t1->next;
        }
        while (t1 != t2) {
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }

    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int countA = 0;
        int countB = 0;

        
        while (temp1) {
            temp1 = temp1->next;
            countA++;
        }

        
        while (temp2) {
            temp2 = temp2->next;
            countB++;
        }

        
        if (countA > countB) {
            return get_intersection(headA, headB, countA - countB);
        } else {
            return get_intersection(headB, headA, countB - countA);
        }
    }
};

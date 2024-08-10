class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
           
            delete head; 
            return nullptr;
        }

        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        // Use two pointers: fast moves twice as fast as slow
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }


        prev->next = slow->next; 
        delete slow; 

        return head;
    }
};

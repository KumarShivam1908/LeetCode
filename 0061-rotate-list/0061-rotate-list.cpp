class Solution {
public:
    ListNode* getKthNode(ListNode* head, int k) {
        ListNode* temp = head;
        int size = 0;
        
        // Calculate the size of the list
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        
        // If k is a multiple of size, the list should remain unchanged
        k = k % size;
        if (k == 0) {
            return nullptr;
        }
        
        // Find the (size - k)th node
        int Tovisit = size - k - 1;
        temp = head;
        while (Tovisit > 0) {
            temp = temp->next;
            Tovisit--;
        }
        
        return temp;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        
        ListNode* kthNode = getKthNode(head, k);
        
        // If getKthNode returns nullptr, it means no rotation is needed
        if (kthNode == nullptr) {
            return head;
        }
        
        ListNode* newhead = kthNode->next;
        kthNode->next = nullptr;
        
        ListNode* temp = newhead;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp->next = head;
        
        return newhead;
    }
};

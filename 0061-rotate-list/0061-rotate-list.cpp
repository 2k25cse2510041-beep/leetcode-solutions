class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL || k == 0)
            return head;
        int n = 1;
        ListNode* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
            n++;
        }

        k = k % n;

        if(k == 0)
            return head;

        temp->next = head;
        int steps = n - k;
        ListNode* newTail = head;
        for(int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
};
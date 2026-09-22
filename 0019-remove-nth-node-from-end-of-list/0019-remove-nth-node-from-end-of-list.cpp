class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        if (n == length) {
            return head->next;
        }
        temp = head;
        for (int i = 1; i < length - n; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
};
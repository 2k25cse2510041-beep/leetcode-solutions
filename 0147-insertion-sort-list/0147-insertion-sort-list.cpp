class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        while(curr != NULL) {
            ListNode* nextNode = curr->next;
            ListNode* temp = dummy;
            while(temp->next != NULL && temp->next->val < curr->val) {
                temp = temp->next;
            }
            curr->next = temp->next;
            temp->next = curr;
            
            curr = nextNode;
        }
        return dummy->next;
    }
};
class Solution{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* slow = dummyHead;
        ListNode* fast = dummyHead;
        while(n-- && fast != NULL){
            fast = fast->next;
        }

        fast = fast->next;

        while(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next-next;

        return dummyHead->next;
    }
};

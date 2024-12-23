class Solution{
public:
    ListNode* swapPairs(ListNode* head){
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListHead* cur = dummyHead;
        while(cur->next != nullptr && cur->next->next != nullptr){
            ListNode* tmp = cur->next;
            ListNode* tmp1 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = tmp;
            cur->next->next->next = tmp1;

            cur = cur->next->next;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

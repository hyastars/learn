#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x) ,next(NULL) {}
}

class Solution {
public:
    ListNode* addTwoNumber(ListNode* l1,ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;

        while(l1 || l2 || carry) {
            int sum = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            carry = sum/10;
            tail->next = new ListNode(sum%10);
            tail = tail->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        return dummy.next;
    }   
};

ListNode* createList() {
    int n;
    cout << "请输入链表中的数字，以空格分隔，输入-1结束: ";
    ListNode* head = nullptr, * tail = nullptr;
    while(cin >> n && n!= -1) {
        if(!head) {
            head = tail = new ListNode(n);
        }
        else {
            tail->next = new ListNode(n);
            tail = tail->next;
        }
    }
    return head;
}

void printList(ListNode* node) {
    while (node) {
        cout << node->val;
        if (node->next) cout << " -> ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    cout << "输入第一个链表: ";
    ListNode* l1 = createList();
    cout << "输入第二个链表: ";
    ListNode* l2 = createList();

    Solution solution;
    ListNode* result = solution.addTwoNumber(l1,l2);

    cout << "相加后的链表: ";
    printList(result);

    return 0;
}
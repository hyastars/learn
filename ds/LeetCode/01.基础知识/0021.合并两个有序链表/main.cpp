#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x) , next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1 , ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(l1 != nullptr && l2 != nullptr) {
            if(l1->val > l2->val) {
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }
        }
        tail->next = (l1 != nullptr) ? l1 : l2;
        return dummy.next;
    }
};

int main() {
    Solution solution;

    int n , m ,val;

    cout << "输入第一个链表节点数目: " ;
    cin >> n;
    ListNode* l1 = nullptr;
    ListNode* tail = nullptr;

    for(int i = 0 ; i < n ;i++) {
        cout << "输入节点值: " ;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if(!l1) {
            l1 = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    cout << "输入第二个链表节点数目: ";
    cin >> m;
    ListNode* l2 = nullptr;
    ListNode* tail2 = nullptr;

    for (int i = 0; i < m; ++i) {
        cout << "输入节点值: ";
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (!l2) {
            l2 = newNode;
            tail2 = newNode;
        }
        else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    ListNode* result = solution.mergeTwoLists(l1,l2);

    cout << "合并后的链表：" ;
    while(result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
 }
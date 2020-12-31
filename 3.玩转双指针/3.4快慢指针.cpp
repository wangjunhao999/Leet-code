//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    do {
        if (!fast || !fast->next)
            return nullptr;
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);

    fast = head;
    while (fast != slow) {
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}
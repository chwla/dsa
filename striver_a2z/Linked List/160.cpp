/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode* a = headA;
        ListNode* b = headB;

        // If there's an intersection, a and b will meet there after at most 2 passes
    while (a != b) {
        if (a != nullptr)a = a->next;
        else a = headB;
        if (b != nullptr)b = b->next;
        else b = headA;
    }

        return a; // either intersection node or nullptr
    }
};
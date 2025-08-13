/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int n2=0;
        ListNode* temp=head;
        while(temp){
            n2++;
            temp=temp->next;
        }
        if (n == n2) return head->next;
        int count=n2-n-1;
        ListNode* temp2=head;
        while(count--){
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return head;
    }
};
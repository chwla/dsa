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
    ListNode *detectCycle(ListNode *head) {
        ListNode* hare=head;
        ListNode* tortoise=head;
        while(hare!=nullptr && hare->next!=nullptr){
            hare=hare->next->next;
            tortoise=tortoise->next;
            if(hare==tortoise){
                ListNode* ans=head;
                while(ans != tortoise){
                    ans=ans->next;
                    tortoise=tortoise->next;
                }
                return ans;
            }
        }
        return NULL;
    }
};
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
    bool isPalindrome(ListNode* head) {
        int n=0;
        ListNode* temp = head;
        while(temp!=nullptr){
            temp=temp->next;
            n++;
        }
        int half=n/2;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(half--){
            ListNode* temp2=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp2;
        }
        if(n%2==1)curr=curr->next;
        while(prev && curr){
            if(prev->val != curr->val)return false;
            prev=prev->next;
            curr=curr->next;
        }
        return true;
    }
};
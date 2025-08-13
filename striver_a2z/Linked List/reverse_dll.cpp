/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    DLLNode* reverseDLL(DLLNode* head) {
        if (!head || !head->next) return head; // Empty or 1-node list

        DLLNode* curr = head;
        DLLNode* temp = NULL;

        // Swap next and prev for all nodes
        while (curr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }

        // After loop, temp is pointing to the node before NULL, i.e., new head
        if (temp) head = temp->prev;

        return head;
    }
};

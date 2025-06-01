/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        Node* curr = head;
        while (curr && curr->next) {
            if (curr->data == curr->next->data) {
                Node* toDelete = curr->next;
                curr->next = toDelete->next;
                if (toDelete->next)
                    toDelete->next->prev = curr;
                delete toDelete;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};

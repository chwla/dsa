/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if (!head) return NULL;

        // Case 1: Delete the head node
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            if (head) head->prev = NULL;
            delete temp;
            return head;
        }

        // Traverse to the x-th node
        Node* temp = head;
        for (int i = 1; i < x && temp != NULL; ++i) {
            temp = temp->next;
        }

        // If node to delete exists
        if (temp != NULL) {
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            delete temp;
        }

        return head;
    }
};

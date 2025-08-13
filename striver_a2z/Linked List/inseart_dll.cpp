/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    Node* addNode(Node* head, int pos, int data) {
        Node* newNode = new Node(data);
        Node* temp = head;

        // Move to the node at position 'pos'
        while (pos-- && temp != NULL) {
            temp = temp->next;
        }

        // Insert after 'temp'
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;

        return head;
    }
};

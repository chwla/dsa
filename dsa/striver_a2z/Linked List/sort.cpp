/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        if (!head || !head->next) return head;

        // Dummy heads and tails for 0s, 1s, and 2s lists
        Node* zeroHead = new Node(0), *zeroTail = zeroHead;
        Node* oneHead = new Node(0), *oneTail = oneHead;
        Node* twoHead = new Node(0), *twoTail = twoHead;

        Node* curr = head;
        while (curr) {
            if (curr->data == 0) {
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            } else if (curr->data == 1) {
                oneTail->next = curr;
                oneTail = oneTail->next;
            } else {
                twoTail->next = curr;
                twoTail = twoTail->next;
            }
            curr = curr->next;
        }

        // Connect the three lists
        zeroTail->next = (oneHead->next) ? oneHead->next : twoHead->next;
        oneTail->next = twoHead->next;
        twoTail->next = nullptr;

        Node* newHead = zeroHead->next;

        // Clean up dummy nodes
        delete zeroHead;
        delete oneHead;
        delete twoHead;

        return newHead;
    }
};
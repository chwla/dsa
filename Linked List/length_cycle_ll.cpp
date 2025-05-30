/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* tortoise=head;
        Node* hare=head;
        while(hare!=nullptr && hare->next!=nullptr){
            hare=hare->next->next;
            tortoise=tortoise->next;
            if(hare==tortoise){
                int count=1;
                Node* temp=tortoise->next;
                while(temp != tortoise){
                    count++;
                    temp=temp->next;
                }
                return count;
            }
        }
        return 0;
    }
};
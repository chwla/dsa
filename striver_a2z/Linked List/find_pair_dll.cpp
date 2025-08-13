// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int, int>> result;
        if (!head) return result;

        Node* left = head;
        Node* right = head;

        // Move `right` to the tail
        while (right->next != nullptr)
            right = right->next;

        while (left != right && left->prev != right) {
            int sum = left->data + right->data;
            if (sum == target) {
                result.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
            else if (sum < target) {
                left = left->next;
            }
            else {
                right = right->prev;
            }
        }

        return result;
    }
};

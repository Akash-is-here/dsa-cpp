/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        {
        if (head == nullptr)
        {
            return nullptr;
        }
        Node *h = head;
        Node *curr = head;
        while (curr != nullptr)
        {
            if (curr->child != NULL)
            {
                // flaten child node
                Node *next = curr->next;
                Node *childhead = flatten(curr->child);
                curr->next = childhead;
                childhead->prev = curr;
                curr->child = nullptr;

                // find tail
                while (curr->next != nullptr)
                {
                    curr = curr->next;
                }

                // atach tail with next ptr
                if (next != nullptr)
                {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
    }
};

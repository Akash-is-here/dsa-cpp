/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == nullptr) {
            return nullptr;
        }

        unordered_map<Node*, Node*> jj;
        Node* newhead = new Node(head->val);
        Node* oldptr = head->next;
        Node* newptr = newhead;
        jj[head] = newhead;

        while (oldptr != nullptr) {
            Node* copynode = new Node(oldptr->val);
            jj[oldptr] = copynode;
            newptr->next = copynode;
            oldptr = oldptr->next;
            newptr = newptr->next;
        }

        oldptr = head;
        newptr = newhead;
        while (oldptr != nullptr) {
            newptr->random = jj[oldptr->random];
            newptr = newptr->next;
            oldptr = oldptr->next;
        }

        return newhead;
    }
};

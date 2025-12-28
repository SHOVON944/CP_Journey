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
        if(head==NULL){
            return head;
        }

        Node* curr = head;
        while(curr!=NULL){
            if(curr->child!=NULL){
                // flatten the child nodes
                Node* off = curr->next;         // off er bodole next use er logic
                curr->next = flatten(curr->child);

                curr->next->prev = curr;
                curr->child = NULL;
                // find tail
                while(curr->next!=NULL){
                    curr = curr->next;
                }

                // attach tail with next ptr
                if(off!=NULL){
                    curr->next = off;
                    off->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};
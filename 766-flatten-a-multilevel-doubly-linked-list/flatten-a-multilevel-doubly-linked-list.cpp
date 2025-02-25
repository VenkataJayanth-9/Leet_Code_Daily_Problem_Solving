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
        if(!head)return nullptr;
        Node* temp = head;
        stack<Node*> s;
        while(temp){
            if(temp->child){
                if(temp->next){
                    s.push(temp->next);
                }
                temp->next = temp->child;
                temp->next->prev = temp;
                 temp->child = nullptr;
            }
            if(!temp->next && !s.empty()){
                temp->next = s.top();
                s.pop();
                temp->next->prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};
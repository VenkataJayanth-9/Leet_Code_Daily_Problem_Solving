/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr && temp->next != nullptr){
            temp = temp->next;
            count++;
        }
        ListNode* t = head;
        for(int i = 1; i<k; i++){
            t = t->next;
        }
        ListNode* h = head;
        for(int i = 0; i<(count-k)+1; i++){
            h = h->next;
        }
        swap(t->val, h->val);
        return head;
    }
};
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
    bool isPalindrome(ListNode* head) {
         if (!head || !head->next) return true; // Single node is always a palindrome

        stack<int> st;
        ListNode* slow = head;
        ListNode* fast = head;

        // Find the middle of the list while pushing the first half into the stack
        while (fast != nullptr && fast->next != nullptr) {
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        // If the list has an odd number of nodes, skip the middle element
        if (fast != nullptr) {
            slow = slow->next;
        }

        // Compare the second half with the stack
        while (slow != nullptr) {
            if (st.top() != slow->val) {
                return false;
            }
            st.pop();
            slow = slow->next;
        }

        return true;
    }
};
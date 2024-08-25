/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false; // Handle empty or single-node lists
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {
                return false; // Fast reached end, so no cycle
            }

            slow = slow->next;
            fast = fast->next->next;
        }

        return true; // Slow and fast met, indicating a cycle
    }
};

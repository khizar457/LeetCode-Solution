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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* temp1 = nullptr;
        int count = 0;
        if (temp == nullptr)
        {
            return temp;
        }
        if (temp->next == nullptr)
        {
            return temp1;
        }
        while (temp!=nullptr)
        {
            count++;
            temp = temp->next;
        }
        int i = 1;
        temp = head;
        
        if (count == n)
        {
            temp = temp->next;
            return temp;
        }
        while (i != (count-n))
        {
            i++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
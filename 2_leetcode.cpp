// Complexity
// Time complexity: O(n)
// Space complexity: O(n)

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;

        while (first != nullptr || second != nullptr) {
            int x = (first != nullptr) ? first->val : 0;
            int y = (second != nullptr) ? second->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;
            int digit = sum % 10;

            ListNode* newNode = new ListNode(digit);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }

            if (first != nullptr) first = first->next;
            if (second != nullptr) second = second->next;
        }

        if (carry > 0) {
            tail->next = new ListNode(carry);
        }

        return head;
    }
};

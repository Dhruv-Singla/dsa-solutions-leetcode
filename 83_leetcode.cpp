// Complexity
// Time complexity: O(n)
// Space complexity: O(1)

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* index=head;
        while(index != nullptr && index->next){
        if(index->val == index->next->val){
            index->next=index->next->next;
            }else{
                index=index->next;
            }
        }
        return head;
    }
};

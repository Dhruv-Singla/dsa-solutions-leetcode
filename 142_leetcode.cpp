/**# Intuition
2 pointer approch

# Complexity
- Time complexity: O(N)

- Space complexity: O(1)

# Code
```cpp []

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ahead = head;
        ListNode* behind = head;
        while(ahead!= nullptr && ahead->next !=nullptr ){
            ahead = ahead->next->next;
            behind= behind->next;
            if(ahead==behind){
                break;
            }
        }

        if (!ahead || !ahead->next) return nullptr;
        ahead = head;
        while(ahead!=behind){
            ahead=ahead->next;
            behind=behind->next;
        }
        return behind;
    }
};
```

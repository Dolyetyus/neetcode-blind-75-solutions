class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr){
            return false;
        }
        if (head->val == -69){
            return true;
        }
        head->val = -69;

        return (hasCycle(head->next));
    }
};

class Solution {
public:
    ListNode* prev = nullptr;

    ListNode* reverseList(ListNode* head) {
        if (head == nullptr){
            return prev;
        }
        if (head->next!=nullptr){
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            reverseList(temp);
        }
        else{
            head->next = prev;
            return head;
        }
    }
};

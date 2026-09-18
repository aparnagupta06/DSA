class Solution {
public:
    ListNode* reverse(ListNode* prev, ListNode* head){
        if(head == nullptr)
            return prev;

        ListNode* future = head->next;
        head->next = prev;
        return reverse(head, future);
    }

    ListNode* reverseList(ListNode* head) {
        return reverse(nullptr, head);    
    }
};

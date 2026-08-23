#define MAX 1005

class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = slow->next;

        slow->next = NULL;

        while(curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* copy = head;
        while(prev != NULL)
        {
            ListNode* next1 = copy->next;
            ListNode* next2 = prev->next;
            copy->next = prev;
            prev->next = next1;
            copy = next1;
            prev = next2;
        }
    }
};
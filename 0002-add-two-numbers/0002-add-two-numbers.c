/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
     ListNode * newnode(ListNode *add , int val)
    {
        ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
        temp->next =NULL;
        temp->val = val;
        if(add == NULL)
            return temp;
        ListNode *tail = add;
        while(tail->next != NULL)
            tail = tail->next;
        tail->next = temp;
        return add;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *add = NULL;
        int carry = 0;
        while(l1 && l2)
        {
            int sum = l1->val + l2->val + carry;
            carry = sum /10;
            add = newnode(add , sum %10);
            l1 = l1->next;
            l2=l2->next;
        }
    if(l1 == NULL && l2!=NULL)
    {   
        if(carry != 0)
        {
            int sum = l1->val + carry;
            add = newnode(add , sum %10);
        }
        ListNode *tail = add;
        while(tail->next != NULL)
            tail = tail->next;
        tail->next = l1->next;
        return add;
    }
        if(l2 == NULL && l1!=NULL)
    {   
        if(carry != 0)
        {
            int sum = l2->val + carry;
            add = newnode(add , sum %10);
        }
        ListNode *tail = add;
        while(tail->next != NULL)
            tail = tail->next;
        tail->next = l2->next;
        return add;
    }
    return add;
    }

}
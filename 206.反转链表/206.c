/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//迭代
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL)
        return head;
    
    else
    {
        struct ListNode* next = head;
        struct ListNode* now = head;
        
        next = now->next;
        now->next = NULL;
        
        while(next != NULL)
        {
            struct ListNode* tmp = next->next;
            next->next = now;
            now = next;
            next = tmp;
        }
        
        return now;
    }
}

/*
//递归
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    
    struct ListNode* newHead = reverseList(head->next);
    
    head->next->next = head;
    head->next = NULL;
    
    return newHead;
}
*/
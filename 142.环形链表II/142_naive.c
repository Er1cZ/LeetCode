/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode dummy;
    struct ListNode* p = &dummy;
    p->next = head;
    
    int count = 0;
    while(p->next != NULL)
    {
        p = p->next;
        
        struct ListNode* p1 = &dummy;
        for(int i = 0; i< count;i++)
        {
            p1 = p1->next;
            if(p1 == p)
                return p1;
        }
        count++;
    }
    
    return NULL;
}
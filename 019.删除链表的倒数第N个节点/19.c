/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if (n == 0) 
        return head;
    
    struct ListNode* Npre = head;
    struct ListNode* now = head;
    
    for(int i = 0; i < n; i++)
    {
        now = now->next;
    }
    
    if(now == NULL)
    {
        head = head->next;
        return head;
    }
    else
    {
        while(now->next != NULL)
        {
            now = now->next;
            Npre = Npre->next;
        }
        
        Npre->next = Npre->next->next;
        return head;
    }
}
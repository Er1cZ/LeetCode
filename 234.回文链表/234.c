/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode dummy;
    struct ListNode *p = &dummy;
    p->next = head;
    
    int listLen = 0;
    while(p->next != NULL)
    {
        listLen++;
        p = p->next;
    }
    
    if(listLen <= 1)
        return true;
    else
    {   
        int stack[listLen / 2];
        p = dummy.next;
        for(int i = 0; i< listLen / 2; i++)
        {
            stack[i] = p->val;
            p = p->next;
        }
        
        //如果长度为奇数，跳过中间元素
        if(listLen % 2 == 1)
            p = p->next;
        
        for(int i = listLen / 2 - 1; i >= 0; i--)
        {
            if(p->val != stack[i])
                return false;
            p = p->next;
        }
        
        return true;
    }
}
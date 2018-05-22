/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
//思路一：遍历当前节点之前的所有节点，判断是否有相同
bool hasCycle(struct ListNode *head) {
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
                return true;
        }
        count++;
    }
    
    return false;
}
*/

//思路2 快慢指针，如果存在环形结构，则慢指针一定会在某个时刻追上快指针
bool hasCycle(struct ListNode *head) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* fast = &dummy;
    struct ListNode* slow = &dummy;
    
    while(fast->next != NULL && fast->next->next != NULL)
    {
        fast=fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return true;
    }
        
    return false;
}
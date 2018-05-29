//hash version?
struct linkList
{
    int val;
    struct linkList* next;
};

bool containsDuplicate(int* nums, int numsSize) {
    if(numsSize <= 1 || nums == NULL)
        return false;
    
    struct linkList** hashTab = (struct linkList**)malloc(701 * sizeof(struct linkList*));
    for(int i = 0; i < 701; i++)
        hashTab[i] = NULL;
    
    for(int i = 0; i < numsSize; i++)
    {
        int val = nums[i];
        int index = abs(val) % 701;
        struct linkList* head = hashTab[index];
        struct linkList* tmp = head;
        
        while(tmp != NULL)
        {
            if(val == tmp->val)
                return true;
            tmp = tmp->next;
        }
        
        struct linkList* newHead = (struct linkList*)malloc(sizeof(struct linkList));
        newHead->val = val;
        newHead->next = head;
        
        hashTab[index] = newHead;
    }
    
    return false;
}
/*
//naive version
bool containsDuplicate(int* nums, int numsSize) {
    if(numsSize <= 1 || nums == NULL)
        return false;
    
    for(int i = 0; i < numsSize - 1; i++)
    {
        int tmp = nums[i];
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[j] == tmp)
                return true;
        }
    }
    
    return false;
}
*/
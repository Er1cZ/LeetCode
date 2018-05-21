int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int pre = -1;
    int max = 0;
    
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            if(i - pre - 1 > max)
                max = i - pre - 1;
            pre = i;
        }
    }
    
    if(nums[numsSize-1] == 1)
        max = max > (numsSize - pre - 1) ? max : (numsSize - pre - 1);
    
    return max;
}
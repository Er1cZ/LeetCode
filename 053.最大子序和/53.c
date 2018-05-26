int maxSubArray(int* nums, int numsSize) {
    if(numsSize == 0)
        return INT_MIN;
    else if(numsSize == 1)
        return *nums;

    int left = maxSubArray(nums, numsSize / 2);
    int right = maxSubArray(nums + numsSize / 2 + 1, (numsSize - 1) / 2);
    
    int tmp = nums[numsSize / 2];
    int tmpMax = tmp;
    
    for(int i = numsSize / 2 - 1; i >= 0; i--)
    {
        tmp += nums[i];
        if(tmp > tmpMax)
            tmpMax = tmp;
    }
    tmp = tmpMax;
    for(int i = numsSize / 2 + 1; i < numsSize; i++)
    {
        tmp += nums[i];
        if(tmp > tmpMax)
            tmpMax = tmp;
    }
    int mid = tmpMax;
    
    if(mid > left && mid > right)
        return mid;
    else if(left > right)
        return left;
    else
        return right;
}
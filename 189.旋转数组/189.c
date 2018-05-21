void rotate(int* nums, int numsSize, int k) {
    int* tmp = (int*)malloc(numsSize * sizeof(int));
    k = k % numsSize;
    
    for(int i = 0; i < k; i++)
    {
        tmp[i] = nums[numsSize - k + i];
    }
    
    for(int i = k; i < numsSize; i++)
    {
        tmp[i] = nums[i - k];
    }
    
    for(int i = 0; i < numsSize; i++)
    {
        nums[i] = tmp[i];
    }
    free(tmp);
}
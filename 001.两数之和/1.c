/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int* result = (int *)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize - 1; i++)
    {
        //从第一个元素遍历到倒数第二个元素
        for(int j = i + 1; j < numsSize; j++)
        {
            //从第i+1个元素遍历到最后一个元素
            if((nums[i] + nums[j]) == target)
            {
                *result = i;
                *(result + 1) = j;
                return result;
            }
        }
    }
    return result;
}
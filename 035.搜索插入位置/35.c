int searchInsert(int* nums, int numsSize, int target) {
    //分治算法
    int result = 0;
    
    //递归终止条件:搜索到最后一个元素
    if(numsSize == 1)
        return *nums >= target ? 0 : 1;
    
    //如果目标正好等于中间元素
    if(nums[numsSize / 2] == target)
        return numsSize / 2;
    
    //目标出现在前半个数组
    else if(nums[numsSize / 2] > target )
    {
        result = searchInsert(nums, numsSize / 2, target);
    }
    
    //目标出现在后半个数组
    else
    {
        nums += numsSize / 2 + numsSize % 2;
        result = numsSize / 2 + numsSize % 2 + searchInsert(nums, numsSize / 2, target);
    }   
    
    return result;
}
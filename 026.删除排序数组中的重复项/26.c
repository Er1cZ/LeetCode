int removeDuplicates(int* nums, int numsSize) {
    if(nums == NULL || numsSize == 0)
        return 0;
    else
    {
        int count = 1;//非重复元素个数
        int j = 0;//指向新数组末尾
    
        for(int i = 1; i < numsSize; i++)
        {
            //如果出现新元素
            if(nums[i] != nums[j])
            {
                j++;//更新数组末尾位置
                nums[j] = nums[i];//缓存新元素
                count++;//更新计数值
            }
        }
        return count;
    }
}
int removeElement(int* nums, int numsSize, int val) {
    int count = 0;      //非val元素个数
    int *pTmp = nums;   //指向新数组的末尾
    
    for(int i = 0; i < numsSize;i++)
    {
        //如果非val
        if(nums[i] != val)
        {
            *pTmp = nums[i];//更新新数组
            count++;        //增加计数值
            pTmp++;         //更新新数组末尾
        }
    }
    
    return count;
}
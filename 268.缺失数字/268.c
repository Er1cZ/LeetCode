int missingNumber(int* nums, int numsSize) {
    //思路
    //1.求和公式求出等差数列的和，然后计算出数组的和，两者之差就是缺失的数字。
    //2.一个数与自身作异或操作等于0，因此可以将0~n的异或结果异或上nums[0]到nums[n-1]的异或结果，计算的答案就是缺失的数字。
    int result = 0;
    
    for(int i = 0; i < numsSize; i++)
    {
        result ^= (i + 1) ^ nums[i];
    }
    
    return result;
    /*
    bool* tmp = (int*)malloc((numsSize + 1) * sizeof(bool));
    
    for(int i = 0; i < numsSize + 1; i++)
    {
        tmp[i] = true;
    }
    
    for(int i = 0; i < numsSize; i++)
    {
        tmp[nums[i]] = false;
    }
    
    for(int i = 0; i < numsSize + 1; i++)
    {
        if(tmp[i])
        {
            free(tmp);
            return i;
        }
    }
    
    return 0;
    */
}
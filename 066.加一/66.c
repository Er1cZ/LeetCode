/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;
    digits[i] += 1;
    
    //计算进位
    while(digits[i] == 10 && i > 0)
    {
        digits[i] = 0;
        i--;
        digits[i] += 1;
    }
    
    //如果最高位需要进位
    if(digits[0] == 10)
    {
        int* result = (int*) malloc((digitsSize + 1) * sizeof(int));//返回结果
        result[0] = 1;
        
        for(int i = 1; i < digitsSize + 1; i++)
        {
            result[i] = 0;
        }
        
        *returnSize = digitsSize + 1;
        return result;
    }
    
    //最高位无进位,直接返回digits
    else
    {
        *returnSize = digitsSize;
        return digits;
    }
}
int lengthOfLastWord(char* s) {
    if(s == NULL || s == '\0')
        return 0;
    
    int len = strlen(s);
    int i = len - 1;
    //去除尾部的空格
    while(s[i] == ' ')
        i--;
    
    //计算最后单次的长度
    int result = 0;
    for(i; i >=0; i--)
    {
        if(s[i] == ' ')
            break;
        result++;
    }
    
    return result;
}
int strStr(char* haystack, char* needle) {
    if(needle == NULL || *needle == '\0')
        return 0;
    
    else
    {
        int srcLen = strlen(haystack);//输入字符串长度
        int desLen = strlen(needle);//要查找的字符串长度
        int count = 0;//出现的第一个位置
        
        while(srcLen >= desLen)
        {
            char tmp[desLen + 1];
            memcpy(tmp, haystack, desLen);
            tmp[desLen] = '\0';
            
            if(strcmp(tmp, needle) == 0)
                return count;
            
            count++;
            srcLen--;
            haystack++;
        }
        
        return -1;
    }
}
bool isNotNumOrChar(char c)
{
    if((c <= '9' && c >= '0') || ((char)tolower(c) >= 'a' && (char)tolower(c) <= 'z'))
        return false;
    else
        return true;
}

bool isPalindrome(char* s) {
    if(*s == '\0')
        return true;
    
    int len = strlen(s);//字符串长度
    int i = 0, j = len - 1;
    while(i < j)
    {
        bool tmp = true;
        if(isNotNumOrChar(s[i]))
        {
            tmp = false;
            i++;
        }
        if(isNotNumOrChar(s[j]))
        {
            tmp = false;
            j--;
        }
        if(tmp)
        {
            if(tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
    }
    
    return true;
}
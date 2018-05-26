char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize == 1)
        return strs[0];
    
    char* stack = (char*)malloc(10000 * sizeof(char));
    int top = 0;
    
    //寻找前两个字符串的公共前缀
    int i = 0;
    while(strs[0][i] != '\0' && strs[1][i] != '\0')
    {
        if(strs[0][i] == strs[1][i])
        {
            stack[top] = strs[0][i];
            top++;
            i++;
        }
        else
            break;
    }
    
    if(top == 0)
        return "";
    else
    {
        i = 2;
        while(i < strsSize)
        {
            for(int j = 0; j < top; j++)
                if(strs[i][j] != stack[j])
                    top = j;
            if(top == 0)
                return "";
            i++;
        }
        
        stack[top] = '\0';
        return stack;
    }
}
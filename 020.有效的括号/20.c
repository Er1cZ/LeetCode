bool push(char c)
{
    //左括号压栈
    if(c == '{' || c == '[' || c == '(')
        return true;
    //右括号弹出
    else
        return false;
}

bool isValid(char* s) {
    if(s == NULL || *s == '\0')
        return true;
    
    int len = strlen(s);
    char stack[len];
    int top = 0;
    
    for(int i = 0; i < len; i++)
    {
        //如果是左括号
        if(push(s[i]))
        {
            stack[top] = s[i];
            top++;
        }
        else
        {
            if(top == 0)
                return false;
            else
            {
                if((s[i] - stack[top - 1]) == 1 || (s[i] - stack[top - 1]) == 2)
                    top--;
                else
                    return false;
            }
        }
    }
    
    return top ? false : true;
}
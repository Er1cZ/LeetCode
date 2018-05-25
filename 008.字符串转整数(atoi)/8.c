int myAtoi(char* str) {
    if(str == NULL || *str == '\0')
        return 0;
    
    bool isNegative = false;
    
    //去除字符串开头的空格
    while(*str == ' ')
        str++;
    
    if(*str == '-')
    {
        isNegative = true;
        str++;
    }
    else if(*str == '+')
        str++;
    
    if(*str < '0' || *str > '9')
        return 0;
    else
    {
        while(*str == '0')
            str++;
        int count = 0;
        long tmp = 0;
        
        while(*str >= '0' && *str <= '9')
        {
            count++;
            if(count > 10)
                return isNegative ? -2147483648 : 2147483647;
            tmp *= 10;
            tmp += *str - 0x30;
            str++;
            
        }
        
        if(isNegative)
            return tmp <= 2147483648L ? -tmp : -2147483648;
        else
            return tmp <= 2147483647L ? tmp : 2147483647;
    }
}
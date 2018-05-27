int convert(char c)
{
    switch(c)
    {
        case 'I':             
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(char* s) {
    int len = strlen(s);
    
    int result = 0;
    int tmp = 0;
    int prev = convert(s[0]), now;
    
    if(len == 1)
        return convert(*s);
    
    for(int i = 1; i < len; i++)
    {
        now = convert(s[i]);
        if(prev < now)
            result -= prev;
        else
            result += prev;
        prev = now;
    }
    
    return result + now;
}
char* reverseString(char* s) {
    
    if(s == NULL)
        return NULL;
    
    int len = strlen(s);
    int head = 0;
    int tail = len - 1;
    
    while(head < tail)
    {
        char tmp = s[head];
        s[head] = s[tail];
        s[tail] = tmp;
        head++;tail--;
    }
    return s;
}
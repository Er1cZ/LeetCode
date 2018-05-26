char* countAndSay(int n) {
    char* prev = (char*)malloc(5000 * sizeof(char));
    char* now = (char*)malloc(5000 * sizeof(char));
    
    strcpy(now,"1");
    if(n == 1)
        return now;
    
    int i = 0;
    int j = 0;
    int count = 0;
    char tmp;
    while(--n)
    {
        strcpy(prev,now);
        tmp = prev[0];
        j = 0;
        count = 0;
        
        for(i = 0; i < strlen(prev); i++)
        {
            if(prev[i] != tmp)
            {
                now[j++] = count + 0x30;
                now[j++] = tmp;
                count = 0;
                tmp = prev[i];
            }
            count++;
        }
        now[j++] = count + 0x30;
        now[j++] = tmp;
        now[j] = '\0';
    }
    
    return now;
}
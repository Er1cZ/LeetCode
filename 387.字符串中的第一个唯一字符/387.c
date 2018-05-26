int firstUniqChar(char* s) {
    int len =  strlen(s);
    int result= -1;
    
    int key[26];
    //26个小写字母
    //-1:没有出现;-2重复出现;>=0：索引
      
    for(int i = 0; i < 26; i++)
        key[i] = -1;
    
    
    for(int i = 0; i < len; i++)
    {
        if(key[s[i] - 'a'] == -1)
            key[s[i] - 'a'] = i;
        else if(key[s[i] - 'a'] >= 0)
            key[s[i] - 'a'] = -2; 
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(key[i] >= 0 && result < 0)
            result = key[i];
        else if(key[i] >= 0)
            if(key[i] < result)
                result = key[i];
    }
    
    return result;
}
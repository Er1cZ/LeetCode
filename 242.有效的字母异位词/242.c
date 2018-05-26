bool isAnagram(char* s, char* t) {
    int len = strlen(s);
    
    if(len != strlen(t))
        return false;
    else
    {
        int key[26] = {0};
        
        for(int i = 0; i < len; i++)
        {
            key[s[i] - 'a']++;
            key[t[i] - 'a']--;
        }
        
        for(int i = 0; i < 26; i++)
            if(key[i] != 0)
                return false;
        
        return true;
    }
}
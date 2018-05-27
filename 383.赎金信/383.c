bool canConstruct(char* ransomNote, char* magazine) {
    int key[26] = {0};
    int lenR = strlen(ransomNote);
    int lenM = strlen(magazine);
    
    if(lenM < lenR)
        return false;
    
    int i = 0;
    for(i = 0; i < lenM; i++)
        key[magazine[i] - 'a']++;
    
    for(i = 0; i < lenR; i++)
    {
        if(key[ransomNote[i] - 'a'] == 0)
            return false;
        key[ransomNote[i] - 'a']--;
    }   
    return true;
}
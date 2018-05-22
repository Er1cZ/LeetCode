int hammingDistance(int x, int y) {
    int diff = x ^ y;
    int result = 0;
    
    while(diff)
    {
        result += diff & 1;
        diff = diff >> 1;
    }
    
    return result;
}
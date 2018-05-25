// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {   
    if(n == 1)
        return 1;
    
    int min = 1, max = n; 
    while(min <= max)
    {
        int mid = min + (max - min) / 2;
        if(isBadVersion(mid))
            max = mid - 1;
        else
            min = mid + 1;
    }
    
    return min;
}
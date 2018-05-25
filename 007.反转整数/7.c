int reverse(int x) {
    
    long tmp = 0;
    while(x)
    {
        tmp *= 10;
        tmp += x % 10;
        x /= 10;
    }
    
    if(tmp < -2147483648L || tmp > 2147483647)
        return 0;
    else
        return tmp;
}
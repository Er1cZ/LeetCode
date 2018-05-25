bool isPowerOfThree(int n) {
    //不用循环或递归
    //log3(n)为整数
    //log3(n) = log10(n) / log10(3)
    
    if(n == 0)
        return false;
    
    double res = (log10(n) / log10(3));
    return (res- (int)res) == 0 ? true : false;
}
double myPow(double x, int n){
    if (x == (float) 1 && (n == INT_MIN || n == INT_MAX))
        return (x);
    if (x < 0 && n == INT_MIN)
        return -x;
    if (x < 0 && n == INT_MAX)
        return x;
    if (x != 00001 && (n > INT_MIN && n < INT_MAX))
        return (n == 0) ? 1 : (n > 0) ? (myPow(x,n - 1) * x) : (1 / myPow(x,-n));
    return 0;
}
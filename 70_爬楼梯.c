int climbStairs(int n){
    int a = 2, b = 3, c;
    if(n <= 3) return n;
    for(int i = 4; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    } 
    return c;
}
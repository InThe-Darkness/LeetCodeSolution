int waysToStep(int n){
    if(n < 2) return n;
    if(n == 3) return 4;
    int a = 1, b = 2, c = 4, d;
    for(int i = 4; i <= n; i++){
        d = (a + b) % 1000000007;
        d = (d + c) % 1000000007;
        a = b;
        b = c;
        c = d;
    }
    return d;
}
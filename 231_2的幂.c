bool isPowerOfTwo(int n){
    if(n < 0)return false;
    int num = 0;
    while(n){
        if(n & 1) num++;
        n >>= 1;
    }
    if(num == 1)return true;
    return false;
}
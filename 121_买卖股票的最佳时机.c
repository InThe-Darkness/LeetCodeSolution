int maxProfit(int* prices, int pricesSize){
    if(pricesSize == 0) return 0;
    int ans = 0;
    int min = prices[0];
    for(int i = 1; i < pricesSize; i++){
        ans = ans > prices[i] - min ? ans : prices[i] - min;
        if(min > prices[i]) min = prices[i];
    }
    return ans;
}
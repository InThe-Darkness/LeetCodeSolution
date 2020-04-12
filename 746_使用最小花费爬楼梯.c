int minCostClimbingStairs(int* cost, int costSize){
    if(costSize < 2) return 0;
    for(int i = costSize - 3; i >= 0; i--){
        cost[i] += cost[i + 1] < cost[i + 2] ? cost[i + 1] : cost[i + 2];
    }
    return cost[0] < cost[1] ? cost[0] : cost[1];
}
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() < 2){
            if(flowerbed[0] == 0) n--;
            if(n > 0)return false;
            return true;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            n--;
        }
        for(int i = 1; i < flowerbed.size() - 1; i++){
            if(flowerbed[i - 1] || flowerbed[i + 1] || flowerbed[i])continue;
            flowerbed[i] = 1;
            n--;
        }
        if(flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0)n--;
        if(n > 0)return false;
        return true;
    }
};
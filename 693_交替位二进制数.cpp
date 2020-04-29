class Solution {
public:
    bool hasAlternatingBits(int n) {
        int i = (1 & n);
        n >>= 1;
        while(n){
            if(i == (1 & n)) return false;
            i = (1 & n);
            n >>= 1;
        }
        return true;
    }
};
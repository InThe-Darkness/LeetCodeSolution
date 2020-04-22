class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num && num % 4 == 0) num /= 4;
        if(num == 1) return true;
        return false;
    }
};


//solution2:
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num < 0 || num & (num - 1)) return false;
        return num % 3 == 1;
    }
};
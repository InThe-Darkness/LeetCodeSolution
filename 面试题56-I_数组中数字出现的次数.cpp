class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int temp = 0, i = 1, a = 0;
        for(auto p: nums) temp ^= p;
        while(!(i & temp)) i <<= 1;
        for(auto p: nums)
            if(i & p) a ^= p;
        temp ^= a;
        return vector<int>({temp, a});
    }
};
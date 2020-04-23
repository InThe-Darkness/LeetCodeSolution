class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int temp;
        for(int i = left; i <= right; i++){
            temp = i;
            while(temp){
                if(temp % 10 == 0)break;
                if(i % (temp % 10) != 0)break;
                temp /= 10;
            }
            if(temp == 0) ans.push_back(i);
        }
        return ans;
    }
};
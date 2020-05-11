class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        for(int i = 0; i < time.size(); i++)
            time[i] %= 60;

        int ans = 0;
        for(auto p = time.begin(); p != time.end(); p++){
            if(*p == 0) ans++;
            else ans += count(p + 1, time.end(), 60 - *p);
        }
            
        return ans;
    }
};
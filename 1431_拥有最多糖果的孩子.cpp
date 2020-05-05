class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxc = candies[0];
        for(auto p : candies)
            if(p > maxc) maxc = p;
        for(auto p : candies)
            ans.push_back(p + extraCandies >= maxc ? true : false);
        return ans;
    }
};
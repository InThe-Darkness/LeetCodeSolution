class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int ans = 0;
        int temp;
        while(i < j){
            ans = max(min(height[i], height[j]) * (j - i), ans);
            if(height[i] < height[j])i++;
            else j--;
        }
        return ans;
                
    }
};
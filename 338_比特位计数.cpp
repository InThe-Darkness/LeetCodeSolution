class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans = {0};
        int temp;
        for(int i = 1; i <= num; i++){
            temp = i;
            ans.push_back(0);
            while(temp){
                if(1 & temp) ans[i]++;
                temp >>= 1; 
            }
        }
        return ans;
    }
};

//solution2:
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans = {0};
        for(int i = 1; i <= num; i++){
            if(1 & i) ans.push_back(ans[i >> 1] + 1);
            else ans.push_back(ans[i >> 1]);
        }
        return ans;
    }
};
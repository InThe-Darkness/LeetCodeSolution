class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int ans = 0;
        if(guess[0] == answer[0]) ans++;
        if(guess[1] == answer[1]) ans++;
        if(guess[2] == answer[2]) ans++;
        return ans;
    }
};
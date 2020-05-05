class Solution {
public:
    int numJewelsInStones(string J, string S) {
        auto isin = [&](char p){
            for(int i = 0; i < J.length(); i++)
                if(J[i] == p) return true;
            return false;
        };
        return count_if(S.begin(), S.end(), isin);
    }
};

//solution2:
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> jew(J.begin(), J.end());
        auto isin = [&](char p){return jew.count(p);};
        return count_if(S.begin(), S.end(), isin);
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(auto p = digits.rbegin(); p != digits.rend(); p++){
            ++*p;
            if(*p >= 10){
                *p = 0;
                if(p + 1 == digits.rend()){
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
            else break;
        }
        return digits;
    }
};
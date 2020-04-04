class Solution {
public:
    void reverseString(vector<char>& s) {
        for(unsigned int i = 0; i < s.size(); i++){
            char temp = s[i];
            if(i >= s.size() - 1 - i)break;
            s[i] = s[s.size() - 1 - i];
            s[s.size() - 1 - i] = temp;
        }
    }
};
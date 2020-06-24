class Solution {
public:
    string replaceSpaces(string S, int length) {
        vector<char> s;
        int i = 0;
        for(int i = 0; i < length; i++){
            if(S[i] == ' '){
                s.push_back('%');
                s.push_back('2');
                s.push_back('0');
            }
            else s.push_back(S[i]);
        }
        return string(s.begin(), s.end());
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int begin = 0, end = 0;
        int ans = 0;
        int length = 0;
        map<char, int> mymap;
        while (end < s.length()) {
            if (mymap.count(s[end])) {
                begin = max(mymap[s[end]], begin);
                length = end - begin + 1;
            }
            else length += 1;
            mymap[s[end]] = end + 1;
            end++;
            if (length > ans) ans = length;
        }
        return ans;
    }
};
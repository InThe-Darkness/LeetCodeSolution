class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int tag = 0;
        int temp;
        int i = 0;
        for(; i < num1.length() && i < num2.length(); i++){
            temp = tag + num1[i] - '0' + num2[i] - '0';
            ans.push_back(temp % 10 + '0');
            tag = temp / 10; 
        }
        for(; i < num1.length(); i++){
            temp = tag + num1[i] - '0';
            ans.push_back(temp % 10 + '0');
            tag = temp / 10; 
        }
        for(; i < num2.length(); i++){
            temp = tag + num2[i] - '0';
            ans.push_back(temp % 10 + '0');
            tag = temp / 10; 
        }
        if(tag) ans.push_back(tag + '0');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
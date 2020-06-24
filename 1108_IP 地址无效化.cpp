class Solution {
public:
    string defangIPaddr(string address) {
        char a[40] = {0};
        int p = 0;
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                a[p++] = '[';
                a[p++] = '.';
                a[p++] = ']';
            }
            else a[p++] = address[i];
        }
        return a;
    }
};
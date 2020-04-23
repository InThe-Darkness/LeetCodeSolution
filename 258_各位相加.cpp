class Solution {
public:
    int addDigits(int num) {
        int temp;
        while(num > 9){
            temp = num;
            num = 0;
            while(temp){
                num += temp % 10;
                temp /= 10; 
            }
        }
        return num;
    }
};
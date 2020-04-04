class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0)return false;
        int temp = x, sum = 0;
        while(temp != 0){
            sum *= 10;
            sum += temp % 10;
            temp /= 10;
        }
        if(sum == x)
            return true;
        return false;
    }
}
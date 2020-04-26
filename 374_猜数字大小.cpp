/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long l = 1, r = n, mid = (l + r) / 2;
        int ans;
        while((ans = guess(mid)) != 0){
            if(ans == 1) l = mid + 1;
            else r = mid;
            mid = (l + r) / 2;
        }
        return mid;
    }
};
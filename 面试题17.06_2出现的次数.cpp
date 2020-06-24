class Solution {
public:
    int numberOf2sInRange(int n) {
        map<int, int> mymap;
        mymap[1] = 0;
        int i = 10;
        for(; i < n ; i *= 10)
            mymap[i] = i / 10 + 10 * mymap[i / 10];
        if(i == n) mymap[i] = i / 10 + 10 * mymap[i / 10];
        int ans = 0;
        while(n > 9){
            int temp = 1;
            while(n / 10 >= temp) temp *= 10;
            ans += (n / temp) * mymap[temp];
            if(n > temp && n >= 3 * temp) ans += temp;
            else if( n > 2 * temp) ans += n - 2 * temp + 1;
            n -= n / temp * temp;
        }
        if(n >= 2) ans++;
        return ans;
    }
};
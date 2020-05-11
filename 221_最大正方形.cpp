class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
		int row = matrix.size();
        if(row == 0)return 0;
		int col = matrix[0].size();
		int ans = 0;
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++) {
				int k = i, l = j;
				int now = 0, tag = 1, tag1 = 1;
				while (k < row && l < col && tag) {
					now = 0;
					for (int m = i; m <= k && tag1; m++)
						for (int n = j; n <= l && tag1; n++) {

							if (matrix[m][n] == '0') {
								tag1 = 0;
								tag = 0;
							}
							else now++;
						}
					if(tag1) ans = max(ans, now);
					//cout << i << " " << j << " " << k << " " << l << " " << tag1 << endl;
					k += 1;
					l += 1;
				}
			}

		return ans;
    }
};


//solution2

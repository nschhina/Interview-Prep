class Solution {
public:
    int dp[1005][1005];

    int solve(int i, int j, string &s) {
        if(i>j || i>=s.size() || j<0 || i<0 || j>=s.size()){
            //cout << "yaha aaya tha";
            return 1;
        }
        if(i==j)
            return dp[i][j] = 1;

        int &ret = dp[i][j];

        if(ret != -1)
            return ret;

        else {
            solve(i+1, j, s);
            solve(i, j-1, s);
            if(s[i] == s[j])
                return ret = solve(i+1, j-1, s);
            else{
                return ret = 0;
            }
        }
    }

    int countSubstrings(string s) {
            memset(dp, -1, sizeof(dp));
        solve(0, s.length()-1, s);
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                cnt += dp[i][j];
            }
        }
        return cnt;
    }
};

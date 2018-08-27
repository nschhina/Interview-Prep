class Solution {
public:
    int longestPalindromeSubseq(string s) {
        if(s.length()==0) return 0;
        if(s.length()==2){
            if(s[0]==s[1]) return 2;
        }
        vector<vector<int>> dp(s.length(),vector<int>(s.length(),0));
        for(int i=0;i<s.length();i++){
            dp[i][i]=1;
        }
        for(int l=2;l<=s.length();l++){
            for(int j=0;j<s.length()-l+1;j++){
                if(l==2 && s[j]==s[j+l-1]){
                    dp[j][j+l-1]=2;
                }
                else if(s[j]==s[j+l-1]){
                    dp[j][j+l-1]=2+dp[j+1][j+l-2];
                }
                else{
                    dp[j][j+l-1]=max(dp[j+1][l+j-1],dp[j][l+j-2]);
                }
            }
        }
        return dp[0][s.length()-1];
    }
};

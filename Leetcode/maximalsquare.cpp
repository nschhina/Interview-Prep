class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
      if(matrix.size()==0 || matrix[0].size()==0) return 0;
      int firlength=matrix.size();
      int seclength=matrix[0].size();
      vector<vector<int>> dp(firlength+1,vector<int> (seclength+1,0));
      for(int i=0;i<=firlength;i++){
        dp[i][0]=0;
      }
      for(int i=0;i<=seclength;i++){
        dp[0][i]=0;
      }
      int max=0;
      for(int i=1;i<=firlength;i++){
        for(int j=1;j<=seclength;j++){
          if(matrix[i-1][j-1]=='1'){
            dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
          }
          else{
            dp[i][j];
          }
          if(dp[i][j]>max) max=dp[i][j];
        }
      }
      return max*max;
    }
};

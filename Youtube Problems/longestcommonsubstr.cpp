class Solution {
public:
  int longest_common_substr(string first, string second) {
    int firlength=first.length();
    int seclength=second.length();
    vector<vector<int>> dp(firlength+1,vector<int> (seclength+1));
    for(int i=0;i<firlength;i++){
      dp[0][i]=0;
    }
    for(int i=0;i<seclength;i++){
      dp[j][0]=0;
    }
    int max=0;
    for(int i=1;i<firlength;i++){
      for(int j=1;j<seclength;j++){
        if(first[i-1]==second[j-1]){
          dp[i][j]=dp[i-1][j-1]+1;
          if(max < T[i][j]){
            max = T[i][j];
          }
        }
        else{
          dp[i][j]=0;
        }
      }
    }
    return dp[firlength][seclength];
  }
private:
};

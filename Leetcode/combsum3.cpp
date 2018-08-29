class Solution {
public:
     void helper(int k, int n, vector<int>& curresult, vector<vector<int>>& result){
        if(curresult.size()==k && n==0){
            result.push_back(curresult);
            return;
        }
        if(curresult.size()<k){
        for(int i = curresult.empty() ? 1 : curresult.back() + 1; i <= 9; ++i){
            if(n-i<0) break;
            curresult.push_back(i);
            helper(k,n-i,curresult,result);
            curresult.pop_back();
         }
      }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> curresult;
        helper(k,n,curresult,result);
        return result;
    }

};

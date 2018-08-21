class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMax=prices[prices.size()-1];
        int profit=0;
        int maxCur=0;
        int maxSoFar=0;
        for(int i=1; i<prices.size(); i++){
            maxCur = max(0, maxCur += prices[i] - prices[i-1]);
            maxSoFar = max(maxCur, maxSoFar);
        }

        return maxSoFar;

    }
};

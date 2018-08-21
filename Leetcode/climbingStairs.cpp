class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        vector<int> cm(n+1); //Top means above the last stair

        //Edge Case
        if(n<2) return 0;

        //Can either start from index 0 or 1
        cm[0]=0;
        cm[1]=0;

        //DP to find the minimum cost to reach the last stair or second last stair
        for(int i=2;i<=n;i++)
            cm[i] = min(cm[i-2]+cost[i-2],cm[i-1]+cost[i-1]);

        //Cost to reach the stair above the last
        return cm[n];
    }
};

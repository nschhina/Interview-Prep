class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        vector<int> maxSum(nums.size(),0);
        maxSum[0]=nums[0];
        cursum=maxSum[0];
        for(int i=1;i<nums.size();i++){
            maxSum[i]=max(maxSum[i-1]+nums[i],nums[i]);
            cursum=max(maxSum[i],cursum);
        }
        return cursum;

    }
};

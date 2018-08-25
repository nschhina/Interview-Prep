class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            if(nums[0]==0) return 1;
            if(nums[0]==1) return 0;
        }
        if(nums[0]!=0) return 0;
        for(int i=0;i<nums.size();i++){
            if((nums[i+1]-nums[i]!=1)) return nums[i]+1;
        }
        return -1;
    }
};

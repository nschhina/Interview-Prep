class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> seen(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            seen[nums[i]]++;
        }
        vector<int> result(2);
        for(int i=1;i<seen.size();i++){
            if(seen[i]==0) result[1]=i;
            if(seen[i]==2) result[0]=i;
            }
        return result;
        }


};

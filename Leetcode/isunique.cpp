class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> values;
        for(int i=0;i<nums.size();i++){
            if(values[nums[i]]==1) return true;
            values[nums[i]]=1;
        }
        return false;
    }
};

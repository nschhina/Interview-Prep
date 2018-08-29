class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> oneans;
        vector<vector<int>> ans;
        helper(nums,ans,oneans,0);
        return ans;
    }
private:
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& oneans, int index){
        ans.push_back(oneans);
        for(int i=index;i<nums.size();i++){
                oneans.push_back(nums[i]);
                helper(nums,ans,oneans,i+1);
                oneans.pop_back();
        }
    }
};

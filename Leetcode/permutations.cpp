class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        answers.clear();
        permuteHelper(nums,0);
        return answers;

    }
private:
    vector<vector<int>> answers;
    void permuteHelper(vector<int>& nums, int start){
        if(start==nums.size()-1){
            answers.push_back(nums);
            return;
        }
        for(int index=start;index<nums.size();index++){
            swap(nums[index],nums[start]);
            permuteHelper(nums,start+1);
            swap(nums[index],nums[start]);
        }
    }
};

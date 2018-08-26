class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0) return 0;
        vector<int> longest(nums.size(),1);
        int i,j;
        for(i=1;i<nums.size();i++){
          for(j=0;j<i;j++){
            if(nums[j]<nums[i]){
              longest[i]=max(longest[i],longest[j]+1);
            }
          }
        }
    return maxinvector(longest);
  }
private:
  int maxinvector(vector<int>& longest){
    int max=longest[0];
    for(int i=1;i<longest.size();i++){
      if(longest[i]>max) max=longest[i];
    }
    return max;
  }
};

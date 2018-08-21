#include <vector>
using namespace std;
class Solution {
public:
    vector<int> memo;
    int robHelper(vector<int>& nums,int i){
        if(i<0){
            return 0;
        }
        if(memo[i]>=0){
            return memo[i];
        }
        int curmax= max(robHelper(nums,i-2)+nums[i],robHelper(nums,i-1));
        memo[i]=curmax;
        return curmax;

    }
    int rob(vector<int>& nums) {
      int i=0;
       while(i!=nums.size()+1){
           memo.push_back(-1);
           i++;
       }
       return robHelper(nums,nums.size()-1);
    }
};

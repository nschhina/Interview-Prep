class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            int start=0;
            while(k%=n){
            for(int i=0;i<k;i++) swap(nums[start+i],nums[start+n-k+i]);
            n-=k;
            start+=k;
            }
        }
};

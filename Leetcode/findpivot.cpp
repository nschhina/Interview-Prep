class Solution {
public:
    int pivotIndex(vector<int>& nums){
        if(nums.size()==0) return -1;
        if(nums.size()==1) return 0;
        int pivot=0;
        int cursum=nums[0];
        sum[0]=0;
        for(int i=1;i<nums.size();i++){
            sum[i]=cursum;
            cout << sum[i] << endl;
            cursum+=nums[i];
        }
        unordered_map<int,int>::iterator it=sum.begin();
        int toreturn=-1;;
        while(it!=sum.end()){
            if(it->second==cursum-it->second-nums[it->first]){
                if(toreturn==-1){
                    toreturn=it->first;
                }
                else{
                    if(toreturn>it->first) toreturn=it->first;
                }
            }
            it++;
        }
        return toreturn;

    }
private:
    unordered_map<int,int> sum;
};

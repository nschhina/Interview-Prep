class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<vector<int>> buckets(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end()){
                map[nums[i]]++;
            }
            else{
                map[nums[i]]=1;
            }
        }
        vector<int> answers;
        unordered_map<int,int>::iterator it=map.begin();
        while(it!=map.end()){
            if(buckets[it->second].size()==0){
                vector<int> curans;
                curans.push_back(it->first);
                buckets[it->second]=curans;
            }
            else{
                buckets[it->second].push_back(it->first);
            }
            it++;
        }
        for(int i=0;i<buckets.size();i++){
            if(buckets[i].size()!=0){
                while(buckets[i].size()!=0){
                    answers.push_back(buckets[i].back());
                    buckets[i].pop_back();

                }
            }
        }
        reverse(answers.begin(), answers.end());
        answers.resize(k);
        return answers;
    }
};

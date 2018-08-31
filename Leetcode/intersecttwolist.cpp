class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mapA;
        unordered_map<int,int> mapB;
        vector<int> answer;
        for(int i=0;i<nums1.size();i++){
            if(mapA.find(nums1[i])==mapA.end()) mapA[nums1[i]]=1;
            else mapA[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mapB.find(nums2[i])==mapB.end()) mapB[nums2[i]]=1;
            else mapB[nums2[i]]++;
        }
        auto it=mapA.begin();
        while(it!=mapA.end()){
            if(mapB.find(it->first)!=mapB.end()) {
            if(mapB[it->first]>0 && mapA[it->first]>0) answer.push_back(it->first);
                mapB[it->first]--;
                mapA[it->first]--;
             if(mapB[it->first]==0) it++;
            }
           else it++;
        }
        return answer;
    }
};

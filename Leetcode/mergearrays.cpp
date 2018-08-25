class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int endpoint=m;
        vector<int> merged(m+n);
        int i=0;
        int j=0;
        int bigger;
        int k=0;
        for(;i<m || j<n;){
            if(i==m){
                bigger=nums2[j];
                j++;
            }
            else if(j==n){
                bigger=nums1[i];
                i++;
            }
            else{
                bigger= nums1[i]<nums2[j]?nums1[i]:nums2[j];
                if(bigger==nums1[i]) i++;
                else j++;
            }
            merged[k]=bigger;
            k++;
        }
        for(int l=0;l<merged.size();l++){
            nums1[l]=merged[l];
        }
    }
};

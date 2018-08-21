#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> exists;
        vector<int> ans(2);
        for(int i=0;i<numbers.size();i++){
            if(exists.find(numbers[i])!=exists.end()){
                ans[1]=i+1;
                ans[0]=exists[numbers[i]];
                return ans;
            }
            else{
                exists[target-numbers[i]]=i+1;
            }
        }
    }
};

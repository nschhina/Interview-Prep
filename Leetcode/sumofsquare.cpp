class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_set<int> exists;
        for(int i=0;i<=sqrt(c);i++){
            exists.insert(i*i);
            if(exists.find(c-i*i)!=exists.end()) return true;
        }
        return false;
    }
};

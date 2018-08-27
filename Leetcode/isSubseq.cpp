class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int> dp(t.length(),0);
            int j=0;
            int k=0;
            for(int i=0;i<dp.size();i++){
                if(t[i]==s[j]){
                    k++;
                    j++;
                }

            }
        if(k==s.length()) return true;
        return false;
    }
};

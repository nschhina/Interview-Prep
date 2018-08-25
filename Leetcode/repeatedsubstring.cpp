class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length()==0) return true;
        if(s.length()==1) return false;
        string curr="";
        for(int i=0;i<(s.length()/2);i++){
            curr+=s[i];
            if(s.length()%curr.length()!=0) continue;
            int numtimes= s.length()/curr.length();
            string temp="";
            for(int i=0;i<numtimes;i++){
                temp+=curr;
            }
            if(temp==s) return true;
            temp="";
        }
        return false;
    }
};

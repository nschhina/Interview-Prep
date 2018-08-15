class Solution {
public:
    bool isPalindrome(string p){
        for(int i=0;i<p.length()/2;i++){
            if(p[i]!=p[p.length()-1-i]){
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        string lstring="";
        int slen=s.length();
        if(slen==0) return s;
        if(slen==1) return s;
        for(int i=0;i<slen;i++){
            for(int j=slen-1;j>i;j--){
                if(s[i]==s[j]){
                    if(isPalindrome(s.substr(i,j-i+1))){
                        if(s.substr(i,j-i+1).length()>=lstring.length()) lstring=s.substr(i,j-i+1);
                    }
                }

            }
        }
        if(lstring.length()==0) lstring+=s[0];
        return lstring;

    }
};

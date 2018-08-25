class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        sort(strs.begin(),strs.end());
        string front=strs[0];
        string end=strs[strs.size()-1];
        int min= front.length() < end.length() ? front.length():end.length();
        string rtr="";
        for(int i=0;i<min;i++){
            if(strs[0][i]==strs[strs.size()-1][i]) rtr+=strs[0][i];
            else break;
        }
        return rtr;
    }
};

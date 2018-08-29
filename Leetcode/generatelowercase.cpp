class Solution {
public:
    void backtrack(vector<string> &res, string tmp,string S,int start){
            for(int i=start;i<S.size();i++){
                if(S[i]>='0' and S[i]<='9') tmp+=S[i];
                else{
                    tmp+=toupper(S[i]);
                    backtrack(res,tmp,S,i+1);
                    tmp[i]=tolower(S[i]);
                }
            }
            res.push_back(tmp);
    }
    vector<string> letterCasePermutation(string S) {
        vector<string>res;
        string tmp="";
        backtrack(res,tmp,S,0);
        return res;
    }
};

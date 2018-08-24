class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        int numgroups=S.length()/4;
        int firstgrouplen=S.length()%4;
        string result="";
        int temp=K;
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='-') continue;
            if(firstgrouplen==0){
                result+='-';
                firstgrouplen--;
            }
            else if(firstgrouplen<0){
                if(temp==0){
                    result+='-';
                    temp=K;
                }
            }
            else{
            result+=S[i];
            firstgrouplen--;
            temp--;
          }
        }
        char now= ' ';
        cout << result << endl;
        for(int i=0;i<result.length() && i<result.length()/2;i++){
            result[i]=now;
            result[i]=result[result.length()-i-1];
            result[result.length()-i-1]=now;
        }
        return result;

    }
};
